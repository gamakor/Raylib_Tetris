#include "raylib.h"
#include "Grid.h"
#include "blocks.cpp"
#include "game.h"
#include "colors.h"
#include "iostream"

#define SCREEN_WIDTH (500)
#define SCREEN_HEIGHT (620)

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

        DrawRectangleRounded({320,55,170,60},.3f,6,lightBlue);
        DrawRectangleRounded({320,235,170,180},.3f,6,lightBlue);
        DrawText("Score",365,15,38,WHITE);
        DrawText("Next",370,175,38,WHITE);

        char scoreText[10];
        sprintf(scoreText, "%d",game.score);
        int textSize =  MeasureText(scoreText,38);

        DrawText(scoreText,320+(170-textSize)/2,65,38,WHITE);


        if (game.gameOver) {
            DrawText("Game Over",320,450,35,WHITE);
        }
        game.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
