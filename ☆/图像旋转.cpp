#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m+5][n+5], b[n+5][m+5];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", a[j][n-1-i]);
        }
        printf("\n");
    }
    return 0;
}
