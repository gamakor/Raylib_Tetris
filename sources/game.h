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

    Block GetRandomBlock();

    std::vector<Block> GetAllBlocks();

    void Draw();
    void HandleInput();

    void MoveBlockLeft();

    void MoveBlockRight();


    void MoveBlockDown();

    void UpdateBlockRotation();

    Grid grid;
private:
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};



#endif //GAME_H
