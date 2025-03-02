//
// Created by gamakor on 2/24/25.
//

#include "Grid.h"
#include <iostream>
#include "colors.h"

Grid::Grid() {

    numRows = 20;
    numColumns = 10;
    cellSize = 30;
    Intialize();
    colors = GetCellColors();
}

void Grid::Intialize() {
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numColumns; column++) {
            grid[row][column] = 0;
        }

    }
}

void Grid::Print() {
    for (int row = 0; row < numColumns; row++) {
        for (int column = 0; column < numColumns; column++) {
            std::cout << grid[column][row] << "";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw() {
     for (int row = 0; row < numRows; row++) {
         for (int column = 0; column < numColumns; column++) {
             int cellValue = grid[row][column];
             DrawRectangle(column*cellSize+1,row*cellSize+1,cellSize-1,cellSize-1,colors[cellValue]);
         }
     }
}

bool Grid::IsCellOutside(int row, int column) {
    if (row>= 0 && row < numRows && column >= 0 && column < numColumns) {
        return false;
    } return true;
}



