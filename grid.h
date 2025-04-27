#pragma once
#include <vector>
#include <raylib.h>
class Grid {
public:
	Grid();
	void Initialize();
	void Print();
	void Draw();
	int grid[20][10];
	bool IsCellOutside(int row, int column);
private:
	//std::vector<Color> GetCellColors();
	int numRows;
	int numCols;
	int cellSize;
	std::vector<Color> colors;
};

