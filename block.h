#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"
class Block
{
public:
	Block();
	void Draw();
	void Move(int rows, int columns);
	std::vector<Position> GetCellPositions();
	int id; //to differentiate from other blocks
	std::map<int, std::vector<Position>> cells;
private:
	int cellSize;
	int rotationState;
	std::vector<Color> colors;
	int rowOffset;
	int columnOffset; //to change or make blocks move we can js give offsets a value to add to original positional value of the block

};
