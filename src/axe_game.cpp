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

    while (true)
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}