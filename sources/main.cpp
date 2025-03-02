#include "raylib.h"
#include "Grid.h"
#include "blocks.cpp"
#include "game.h"

#define SCREEN_WIDTH (300)
#define SCREEN_HEIGHT (600)

#define WINDOW_TITLE "Window title"

int main(void)
{
    Color darkBlue = {44,44,127,255};
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);


    Game game = Game();
    game.grid.Print();




    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(darkBlue);
        game.HandleInput();
       game.Draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
