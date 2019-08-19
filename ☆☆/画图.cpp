#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int a[105][105];
    memset(a, 0, sizeof(a));
    int n, sum=0;
    int x1, y1, x2, y2;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        for(int i=x1;i<x2;i++)
        {
            for(int j=y1;j<y2;j++)
            {
                if(a[i][j] == 1) continue;
                else
                {
                    a[i][j] = 1;
                    sum++;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}
