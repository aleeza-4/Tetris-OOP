#include "block.h"
Block::Block()
{
	cellSize = 30;
	rotationState = 0;
	colors = GetCellColors();
	rowOffset = 0;
	columnOffset = 0;
}
void Block::Draw()
{
	std::vector<Position> tiles = GetCellPositions(); //retrieves value of position in accordance with rotationstate
	for (Position item : tiles)
	{
		DrawRectangle(item.column * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]); //colors are generated using block id

	}
}
void Block::Move(int rows, int columns)
{
	rowOffset += rows;
	columnOffset += columns;
}
std::vector<Position> Block::GetCellPositions()
{
	std::vector<Position> tiles = cells[rotationState];
	std::vector<Position> movedtiles; // to hold the amt of tiles been moved
	for (Position item : tiles)
	{
		Position newPos = Position(item.row + rowOffset, item.column + columnOffset); 
		movedtiles.push_back(newPos);
	}
	return movedtiles;
}