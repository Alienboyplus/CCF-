#include<stdio.h>
#include<string.h>

int main()
{
    int n, l, t, temp;
    scanf("%d%d%d", &n, &l, &t);
    int p[n];
    int v[n];
    memset(p, 0, sizeof(p));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &p[i]);
        v[i] = 1;
    }
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i] == 0 || p[i] == l)
            {
                v[i] = -v[i];
            }
            p[i] = p[i] + v[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n && j!=i;j++)
            {
                if(p[i] == p[j])
                {
                    v[i] = -v[i];
                    v[j] = -v[j];
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", p[i]);
    }
}
