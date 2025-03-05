//
// Created by gamakor on 2/24/25.
//
#pragma once
#ifndef GRID_H
#define GRID_H
#include <vector>
#include <raylib.h>

using namespace std;

class Grid {
public:
    Grid();
    void Intialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int grid[20][10];
    int ClearFullRows();
private:

    int numRows;
    int numColumns;
    int cellSize;
    vector<Color> colors;
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);


};



#endif //GRID_H
