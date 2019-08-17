#include<stdio.h>
int main()
{
    int n, k, temp=0, count = 0;
    scanf("%d%d", &n, &k);
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        temp += a[i];
        if(temp>=k)
        {
            count++;
            temp = 0;
        }
        else if(i==n)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
