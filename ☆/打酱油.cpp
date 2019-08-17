#include<stdio.h>
int main()
{
    int n, count=0;
    scanf("%d", &n);
    n = n/10;
    while(n>0)
    {
        if(n-5>=0)
        {
            count = count + 7;
            n = n-5;
        }
        else if(n-3>=0)
        {
            count = count + 4;
            n = n-3;
        }
        else
        {
            count = count + n;
            break;
        }
    }
    printf("%d", count);
    return 0;
}
