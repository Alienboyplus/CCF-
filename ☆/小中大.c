#include<stdio.h>
int a[10000005];
int main()
{
    int n;
    scanf("%d", &n);
    int max, min;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    if(a[0]>=a[n-1])
    {
        max = a[0];
        min = a[n-1];
    }
    else
    {
        max = a[n-1];
        min = a[0];
    }
    if(n%2==1)
    {
        int mid = a[n/2];
        printf("%d %d %d", max, mid, min);
    }
    else
    {
        if((a[n/2] + a[(n/2)-1])%2==1)//³ý²»¾¡
        {
            double mid = (a[n/2] + a[(n/2)-1])/2.0;
            printf("%d %.1lf %d", max, mid, min);
        }
        else
        {
            int mid = (a[n/2] + a[(n/2)-1])/2;
            printf("%d %d %d", max, mid, min);
        }
    }

    return 0;
}
