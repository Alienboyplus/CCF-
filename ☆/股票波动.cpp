#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5], max = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(max<abs(a[i]-a[i+1])) max = abs(a[i]-a[i+1]);
    }
    printf("%d", max);
    return 0;

}
