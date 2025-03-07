//
// Created by gamakor on 2/27/25.
//

#ifndef GAME_H
#define GAME_H
#pragma once
#include "blocks.cpp"
#include "Grid.h"



class Game {
public:
    Game();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandleInput();
    void MoveBlockDown();

    bool gameOver;
    int score;
private:
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
    void MoveBlockLeft();
    void MoveBlockRight();
    void UpdateBlockRotation();
    Block GetRandomBlock();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Grid grid;
};



#endif //GAME_H
