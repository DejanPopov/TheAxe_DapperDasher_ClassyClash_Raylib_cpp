#include <iostream>
#include "raylib.h"

void print(std::string Message)
{
    std::cout << Message << std::endl;
}

int main()
{
    // const keyword => Can't be changed ever!
    /* Braced VS Assigned initialisation
    int x = 10.5;  // Allowed, x becomes 10 (implicit truncation).
    int y{10.5};   // Error: narrowing conversion is not allowed.
    */
    const int win_width  {512};
    const int win_height {380};
    InitWindow(win_width,win_height,"DapperDasher!");
    SetTargetFPS(60);

    // Rectangle dimesnions
    const int rec_width    {50};
    const int rec_height   {80};
    int       rec_pos_Y    {win_height - rec_height};
    int       rec_velocity {0};

    while (!WindowShouldClose)
    {

        /*Game Logic Begins*/
        BeginDrawing();
        ClearBackground(WHITE);

        if (IsKeyPressed(KEY_SPACE))
        {
            rec_velocity -= 10;
        }

        rec_pos_Y += rec_velocity;
        DrawRectangle(win_width/2,rec_pos_Y,rec_width,rec_height,BLUE);

        EndDrawing();
        /*Game Logic Ends*/
    }

    CloseWindow();
}