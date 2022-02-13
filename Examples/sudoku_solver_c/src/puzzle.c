#include "../include/sudoku.h"

Square ***setUpPuzzle(int **puzzle)
{
    Square ***sudoku;
    int i, j;
    sudoku = (Square ***)malloc(sizeof(Square **) * 9);
    for (i = 0; i < 9; i++)
    {
        sudoku[i] = (Square **)malloc(sizeof(Square *) * 9);
        for (j = 0; j < 9; j++)
        {
            sudoku[i][j] = (Square *)malloc(sizeof(Square) * 9);
            sudoku[i][j]->number = puzzle[i][j];

            sudoku[i][j]->row = i;
            sudoku[i][j]->column = j;

            if (sudoku[i][j]->number != 0)
            {
                sudoku[i][j]->code = POSSIBLE;
            }
            else
            {
                sudoku[i][j]->code = 0x0;
            }
        }
    }
}

int **createPuzzle()
{
    int **puzzle;
    int i, j;
    int array[9][9] = {
        9, 0, 0, 0, 0, 0, 5, 0, 0,
        0, 0, 2, 9, 5, 0, 0, 0, 0,
        0, 3, 0, 0, 0, 8, 2, 0, 1,
        2, 0, 8, 0, 0, 0, 0, 4, 7,
        0, 0, 0, 0, 0, 0, 0, 0, 0,
        4, 6, 0, 0, 0, 0, 1, 0, 3,
        7, 0, 4, 1, 0, 0, 0, 6, 0,
        0, 0, 0, 0, 4, 9, 3, 0, 0,
        0, 0, 6, 0, 0, 0, 0, 0, 2};

    puzzle = (int **)malloc(sizeof(int *) * 9);

    for (i = 0; i < 9; i++)
    {
        // Puzzle ın her elemanını 9 int boyutunda yapıyor.
        puzzle[i] = (int *)malloc(sizeof(int) * 9);
        for (j = 0; j < 9; j++)
        {
            // Puzzle ın her elemanına arrayı aktarıyor.
            puzzle[i][j] = array[i][j];
        }
    }

    return puzzle;
}

void printPuzzle(int **puzzle)
{
    int i, j;
    printf("------------------------------\n");
    for (i = 0; i < 9; i++)
    {
        // Her satırı yazdırır.
        for (j = 0; j < 9; j++)
        {
            printf(" %d ", puzzle[i][j]);
            if ((j + 1) % 3 == 0)
                printf("|");
        }
        printf("\n");
        // i sıfırdan başladığı için +1 yapılır çizgilerin düzgün olması için.
        if ((i + 1) % 3 == 0)
            printf("------------------------------\n");
    }
}

/*
╔══════════════════════════╗
╚══════════════════════════╝
*/