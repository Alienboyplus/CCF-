#include<stdio.h>

const int ROW = 15;
const int COL = 10;
const int N = 4;

int board[ROW+1][COL];
int block[N][N];

struct{
    int row;
    int col;
}coords[N];

using namespace std;

int main()
{
    int row, col;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            scanf("%d", &board[i][j]);
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d", &block[i][j]);
        }
    }
    scanf("%d", &col);

    //最底下一层全为1
    for(int j=0;j<COL;j++)
    {
        board[ROW][j] = 1;
    }

    //记录给的方块中含1的坐标
    int k = 0;
    for(int i=N-1;i>=0;i--)
    {
        for(int j=0;j<N;j++)
        {
            if(block[i][j] == 1)
            {
                coords[k].row = i;
                coords[k].col = j;
                k++;
                //printf("[%d%d]\n", i, j);
            }
        }
    }

    //模拟下落过程
    row = 1; //从第二排算起也可以的
    col--;//从0开始算
    bool flag =false;
    for(;;)
    {
        flag = false;
        for(int i=0;i<N;i++)
        {
            if(board[row+coords[i].row][col+coords[i].col] == 1)
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            break;
        }
        row++;
    }
    row--;

    for(int i=0;i<N;i++)
    {
        board[row+coords[i].row][col+coords[i].col] = 1;
    }
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
