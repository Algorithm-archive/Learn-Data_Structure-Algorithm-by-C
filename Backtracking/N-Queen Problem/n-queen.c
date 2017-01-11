#include<stdio.h>
#define EMPTY '-'
#define QUEEN 'Q'

char queen[100][100];
int n;

void initializeBoard(int n)
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            queen[i][j] = EMPTY;
        }
    }
}

void printBoard()
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ", queen[i][j]);
        }
        printf("\n");
    }
}

int haveConflict(int row, int col)
{
    int i,j;

    //check queen column
    for(i=1;i<=n;i++)
    {
        if(queen[row][i] == QUEEN)
            return 1;
    }

    //check queen row
    for(i=1;i<row;i++)
    {
        if(queen[i][col] == QUEEN)
            return 1;
    }

    //check upper left diagonal
    for(i=row-1,j=col-1;i>0 && j>0;i--,j--)
    {
        if(queen[i][j] == QUEEN)
            return 1;
    }

    //check upper right diagonal
    for(i=row-1,j=col+1;i>0 && j<=n;i--,j++)
    {
        if(queen[i][j] == QUEEN)
            return 1;
    }

    return 0;
}

//target is to place one queen in each row so that no one collides with each other
//Here placed_queen parameter shows how much queen we've already placed, also how much row we've already covvered
void backtrack(int placed_queen)
{
    int i, success = 0,next_move;
    if(placed_queen > n) return; // All queens are placed properly

    for(i=1;i<=n;i++)
    {
        if(queen[placed_queen][i] == QUEEN) //If we found already placed queen, remove it
        {
            //remove queen
            queen[placed_queen][i] = EMPTY;
            continue;
        }

        if(!haveConflict(placed_queen, i))
        {
            //place a queen piece
            success = 1;

            queen[placed_queen][i] = QUEEN;

            break;
        }
    }

    next_move = success ? (placed_queen + 1) : (placed_queen -1);

    backtrack(next_move);
}

int main()
{
    scanf("%d", &n);

    initializeBoard(n);

    backtrack(0);

    printBoard();

    return 0;
}
