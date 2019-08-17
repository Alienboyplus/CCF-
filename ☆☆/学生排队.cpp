#include<stdio.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        a[i] = i;
    }
    scanf("%d", &m);
    int id, dis, temp;
    while(m--)
    {
        scanf("%d%d", &id, &dis);
        for(int i=1;i<=n;i++)
        {
            if(id == a[i] && dis>0)
            {
//                printf("get id:%d dis:%d\n", a[i], dis);
                int k = i;
                int j = i+1;
                while(dis--)
                {
                    temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                    k = k+1;
                    j = j+1;
                }
//                printf("after sorted:\n");
//                for(int s = 1;s<=n;s++)
//                {
//                    printf("%d ", a[s]);
//                }
//                printf("\n");
                break;
            }
            else if(id == a[i] && dis<0)
            {
//                printf("get id:%d dis:%d\n", a[i], dis);
                int k = i;
                int j = i-1;
                dis = -dis;
                while(dis--)
                {
                    temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                    k = k-1;
                    j = j-1;
                }
//                printf("after sorted:\n");
//                for(int s = 1;s<=n;s++)
//                {
//                    printf("%d ", a[s]);
//                }
//                printf("\n");
                break;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
