#include<stdio.h>
#include<string.h>
int a[1005], b[10005];
int main()
{
    int n;
    scanf("%d", &n);
    memset(b, 0, sizeof(b));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        b[a[i]] = b[a[i]] + 1;
    }
    int max = b[0];
    int max_index = 0;
    for(int i=0;i<10005;i++)
    {
        if(max<b[i+1])
        {
            max = b[i+1];
            max_index = i+1;
            //printf("max:%d, max_index:%d\n", max, max_index);
        }
    }
    printf("%d", max_index);
    return 0;
}
