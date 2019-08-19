#include<stdio.h>
using namespace std;

struct{
    int winno;
    int x1, y1, x2, y2;
}win[15];

struct{
    int x, y;
}point[15];

int order[15];

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=0;i<n;i++)
    {
        win[i].winno = i+1;
        scanf("%d%d%d%d", &win[i].x1, &win[i].y1, &win[i].x2, &win[i].y2);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d%d", &point[i].x, &point[i].y);
    }
    for(int i=0;i<n;i++)
    {
        order[i] = n-i-1;
    }//³õÊ¼»¯ÏÔÊ¾Ë³Ðò
    int winno, temp;
    for(int i=0;i<m;i++)
    {
        winno = -1;
        for(int j=0;j<n;j++)
        {
            if(win[order[j]].x1 <= point[i].x && point[i].x <= win[order[j]].x2 && win[order[j]].y1 <= point[i].y && point[i].y <= win[order[j]].y2)
            {
                winno = win[order[j]].winno;

                temp = order[j];
                for(int k=j;k>0;k--)
                {
                    order[k] = order[k-1];
                }
                order[0] = temp;
                break;
            }
        }
        if(winno == -1) printf("IGNORED\n");
        else printf("%d\n", winno);
    }
    return 0;
}
