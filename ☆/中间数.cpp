#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int mid = n/2;
    int leftcount = mid;
    int rightcount = n - mid - 1;

    for(int i=mid-1;i>=0;i--)
    {
        if(a[i] == a[mid]) leftcount--;
        else break;
    }//����ȥ����ͬ������

    for(int i=mid+1;i<n;i++)
    {
        if(a[i] == a[mid]) rightcount--;
        else break;
    }//����ȥ����ͬ������

    if(leftcount == rightcount)
    {
        printf("%d", a[mid]);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
