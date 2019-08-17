#include<stdio.h>
int main()
{
    int a[35], sum=0, flag=1;
    for(int i=0;i<35;i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == 0) break;
    }
    if(a[0] == 1) sum = sum+1;
    else if(a[0] == 2) sum = sum+2;
    for(int i=1;a[i]!=0;i++)
    {
        if(a[i] == 2 && a[i-1] == 1)
        {
            flag = 1;
            sum = sum + flag*2;
        }
        else if(a[i] == 2 && a[i-1] == 2)
        {
            flag++;
            sum = sum + flag*2;
        }
        else
        {
            sum = sum + 1;
        }
    }
    printf("%d", sum);
    return 0;
}
