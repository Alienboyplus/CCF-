#include<stdio.h>
int main()
{
    int red, yellow, green, num, time=0;
    scanf("%d%d%d", &red, &yellow, &green);
    scanf("%d", &num);
    int a[num+5], b[num+5];
    for(int i=0;i<num;i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        if(a[i] == 0 || a[i] == 1)
        {
            time = time + b[i];
        }
        else if(a[i] == 2)
        {
            time = time + b[i] + red;
        }
        else continue;
    }
    printf("%d", time);
    return 0;
}
