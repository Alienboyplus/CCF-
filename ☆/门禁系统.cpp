#include<stdio.h>
#include<string.h>
int main()
{
    int n, temp;
    scanf("%d", &n);
    int a[n+5];
    memset(a, 0, sizeof(a));
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &temp);
        a[temp]++;

        if(i != 1)
        {
            printf(" ");
        }
        printf("%d", a[temp]);
    }
    return 0;
}
