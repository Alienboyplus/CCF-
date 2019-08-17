#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int a[505], b[1005];
int main()
{
    int n, count = 0;;
    scanf("%d", &n);
    memset(b, 0, sizeof(b));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        b[abs(a[i])] = b[abs(a[i])]+1;
        if(b[abs(a[i])]==2) count++;
    }
    printf("%d", count);
    return 0;
}
