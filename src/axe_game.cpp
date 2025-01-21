#include <iostream>
#include "raylib.h"

void print(std::string Message)
{
    std::cout << Message << std::endl;
}

int main()
{
    // Window dimensions
    int width  {350};
    int height {200};
    InitWindow(width,height,"AXE GAME!");

    //Circle coordinates
    int circle_x {175};
    int circle_y {100};
    int circle_r {25};

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        /*Game Logic begins here*/

        // Circle is in the middle of the screen
        DrawCircle(circle_x,circle_y,circle_r,BLUE);

        if (IsKeyDown(KEY_D))
        {
            // Circle moves by 10 pixel if D is pressed
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A))
        {
            // Circle moves by 10 pixel if D is pressed
            circle_x =- 10;
        }

        /*Game Logic ends here*/
        EndDrawing();
    }
}