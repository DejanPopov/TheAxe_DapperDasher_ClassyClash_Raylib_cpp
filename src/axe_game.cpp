#include <iostream>
#include "raylib.h"

void print(std::string Message)
{
    std::cout << Message << std::endl;
}

int main()
{
    int width  = 350;
    int height = 200;
    InitWindow(width,height,"AXE GAME!");   

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);
        // Circle is in the niddle of the screen
        DrawCircle(175,100,25,BLUE);
        EndDrawing();
    }
}