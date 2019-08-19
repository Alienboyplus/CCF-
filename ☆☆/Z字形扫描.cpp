#include<stdio.h>
using namespace std;

struct{
    int drow;
    int dcol;//表示增量
}direct[] = {{0, 1}, {1, 0}, {1, -1}, {-1, 1}};//初始化所有增量可能的情况

int main()
{
    int a[505][505], n;
    int EAST = 0, SOUTH = 1, SOUTHWEST = 2, NORTHEAST = 3;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int row = 0, col = 0, next = EAST;
    printf("%d", a[0][0]);
    while(row != n-1 || col != n-1)
    {
        row += direct[next].drow;
        col += direct[next].dcol;
        printf(" %d", a[row][col]);

        if(next == EAST && row == 0)
            next = SOUTHWEST;
        else if(next == EAST && row == n-1)
            next = NORTHEAST;
        else if(next == SOUTH && col == 0)
            next = NORTHEAST;
        else if(next == SOUTH && col == n-1)
            next = SOUTHWEST;
        else if(next == NORTHEAST && col == n-1)
            next = SOUTH;
        else if(next == NORTHEAST && row == 0)
            next = EAST;
        else if(next == SOUTHWEST && row == n-1)
            next = EAST;
        else if(next == SOUTHWEST && col == 0)
            next = SOUTH;
    }
    return 0;
}
