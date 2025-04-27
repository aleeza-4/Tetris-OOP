#include <raylib.h>

#include "game.h"
int main()
{
	Color darkBlue = { 44, 44, 127, 255 };
	InitWindow(300, 600, "Tetris OOP");
	SetTargetFPS(60);
	Game game = Game();
	//Grid grid = Grid(); //grid obj
	//grid.grid[0][0] = 1;
	//grid.grid[3][5] = 4;
	//grid.grid[17][8] = 7;
	/*IBlock block = IBlock();*/
	/*block.Move(3, 1);*/
	//grid.Print();
	while (WindowShouldClose() == false)
	{
		game.HandleInput();
		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		//grid.Draw();
		//block.Draw();
		EndDrawing();
	}
}
