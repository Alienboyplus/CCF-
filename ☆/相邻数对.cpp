#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1] == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
