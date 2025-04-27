#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game {
private:
	std::vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;
	bool IsBlockOutside();
public:
	Game();
	Block GetRandomBlock();
	Grid grid;
	std::vector<Block> GetAllBlocks();
	void MoveBlockLeft();
	void MoveBlockRight();
	void MoveBlockDown();
	void Draw();
	void HandleInput();

};
