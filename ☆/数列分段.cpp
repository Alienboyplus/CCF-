#include<stdio.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5], count = 1;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=temp)
        {
            temp = a[i];
            count++;
        }
    }
    printf("%d", count);
    return 0;

}
