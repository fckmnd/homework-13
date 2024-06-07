#include <iostream>

int main() {
    const int SIZE = 3;

    int board[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = 0;
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*
задание 3

строки и столбцы перепутаны местами


задание 4
индексы к которым мы обращаемся в программе не попадают в размер массива который задали в начале
*/