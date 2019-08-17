#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5], min=10005;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    for(int i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])<min) min = abs(a[i]-a[i+1]);
    }
    printf("%d", min);
    return 0;
}
