/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

by Jeffery Myers is marked with CC0 1.0. To view a copy of this license, visit https://creativecommons.org/publicdomain/zero/1.0/

*/
#include<iostream>
#include<string>
#include "raylib.h"
#include "resource_dir.h"	// utility header for SearchAndSetResourceDir
#include "Entity.h"
#include "Snake.hpp"
#include "Food.h"


int main ()
{
	// Tell the window to use vsync and work on high DPI displays
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);

	// Create the window and OpenGL context
	InitWindow(800, 600, "Hello Raylib");

	// Utility function from resource_dir.h to find the resources folder and set it as the current working directory so we can load from it
	SearchAndSetResourceDir("resources");
	
	// game loop
	Snake _snake;
	Food food(200, 100);

	BeginDrawing();
	ClearBackground(BLACK);

	while (!WindowShouldClose())		// run the loop until the user presses ESCAPE or presses the Close button on the window
	{
		_snake.draw();
		food.getEntity().draw();

		// drawing
		// Setup the back buffer for drawing (clear color and depth buffers)

		//DrawRectangleDrawRectangle(entity.getPosX() - 8, entity.getPosY(), 8, 8, BLUE);
		//DrawRectangle(entity.getPosX(), entity.getPosY(), 8, 8, BLUE);
		//entity.recordDirection(GetKeyPressed());
		//entity.move();
		
		//DrawText(std::to_string(GetFrameTime()).c_str(), 10, 10, 18, WHITE);

		EndDrawing();
	}


	// destroy the window and cleanup the OpenGL context
	CloseWindow();
	return 0;
}
