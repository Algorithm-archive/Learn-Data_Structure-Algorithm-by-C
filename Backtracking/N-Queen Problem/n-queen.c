#include<stdio.h>
#include<string.h>

#define EMPTY 0
#define QUEEN 1

int queen[100][100];
int n, total_solutions;

void initializeBoard(int n)
{
    memset(queen, EMPTY, sizeof(queen));
}

void printBoard()
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ", queen[i][j] ? 'Q' : '-');
        }
        printf("\n");
    }
    printf("\n");
}

int haveConflict(int row, int col)
{
    int i,j;

    //check the column positions above this position
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
//Here queen_row parameter shows the current we're going to place a Queen
void backtrack(int queen_row)
{
    int i;

    if(queen_row > n)
    {
        total_solutions++;
        printBoard();
        return;
    }

    for(i=1;i<=n;i++)
    {
        if(!haveConflict(queen_row, i))
        {
            queen[queen_row][i] = QUEEN;

            backtrack(queen_row + 1);

            queen[queen_row][i] = EMPTY;
        }
    }
}

int main()
{
    printf("Enter Board size: ");
    scanf("%d", &n);

    initializeBoard(n);

    backtrack(1);

    printf("Total Solutions: %d\n", total_solutions);

    return 0;
}
