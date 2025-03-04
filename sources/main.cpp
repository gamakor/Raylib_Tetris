#include "raylib.h"
#include "Grid.h"
#include "blocks.cpp"
#include "game.h"

#define SCREEN_WIDTH (300)
#define SCREEN_HEIGHT (600)

#define WINDOW_TITLE "Window title"

double lastUpdateTime = 0;
bool EventTriggered(double interval) {
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval) {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main(void)
{
    Color darkBlue = {44,44,127,255};
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose())
    {


        game.HandleInput();
        if (EventTriggered(.3f)) {
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
