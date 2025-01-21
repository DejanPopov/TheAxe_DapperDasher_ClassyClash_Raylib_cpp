#include <iostream>
#include "raylib.h"

void print(std::string Message)
{
    std::cout << Message << std::endl;
}

int main()
{
    // Window dimensions
    int width  {800};
    int height {450};
    InitWindow(width,height,"AXE GAME!");

    // Circle coordinates
    int circle_x {200};
    int circle_y {200};
    int circle_r {25};

    // Axe coordinates
    int axe_x {400};
    int axe_y {0};
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        /*Game Logic begins here*/

        // Circle is in the middle of the screen
        DrawCircle(circle_x,circle_y,circle_r,BLUE);
        DrawRectangle(axe_x,axe_y,50,50,RED);

        // Move the Axe
        axe_y += 10;

        // Move the Circle
        if (IsKeyDown(KEY_D) && circle_x < 350)
        {
            // Circle moves by 10 pixel if D is pressed
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x < 0)
        {
            // Circle moves by 10 pixel if D is pressed
            circle_x =- 10;
        }

        /*Game Logic ends here*/
        EndDrawing();
    }
}