#include <iostream>
#include "raylib.h"

void print(std::string Message)
{
    std::cout << Message << std::endl;
}

int main()
{
    // Window dimensions and FPS
    int width  {800};
    int height {450};
    InitWindow(width,height,"AXE GAME!");
    SetTargetFPS(60);

    // Circle coordinates
    int circle_x {200};
    int circle_y {200};
    int circle_r {25};

    // Circle edges
    int l_circle_x {circle_x - circle_r}; // X coordinate of the circle left edge
    int r_circle_x {circle_x + circle_r}; // X coordinate of the circle right edge
    int u_circle_y {circle_y - circle_r}; // Y coordinate of the circle upper edge
    int b_circle_y {circle_y + circle_r}; // Y coordinate of the circle bottom edge

    // Axe coordinates
    int axe_x     {400};
    int axe_y     {0};
    int axe_len   {50};

    // Axe edges
    int l_axe_x {axe_x};
    int r_axe_x {axe_x + axe_len};
    int u_axe_y {axe_y};
    int b_axe_y {axe_y + axe_len};

    int direction {10};
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        /*Game Logic begins here*/

        // Circle is in the middle of the screen
        DrawCircle(circle_x,circle_y,circle_r,BLUE);
        DrawRectangle(axe_x,axe_y,axe_len,axe_len,RED);

        // Move the Axe
        // direction = -direction; will reverse to opposite direction
        axe_y += direction;

        if (axe_y > height || axe_y < 0)
        {
            direction = -direction;
        }

        // Move the Circle
        if (IsKeyDown(KEY_D) && circle_x < width)
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