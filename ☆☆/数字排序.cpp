//60分代码
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//struct number{
//    int no;
//    int val;
//};
//
//bool cmp(number m, number n)
//{
//    if(m.val != n.val)
//    {
//        return m.val>n.val;
//    }
//    else
//    {
//        return m.no<n.no;
//    }
//}
//
//int main()
//{
//    struct number a[1005];
//    int n, t;
//    scanf("%d", &n);
//    for(int i=1;i<=n;i++)
//    {
//        a[i].no = i;
//        a[i].val = 0;
//    }
//    for(int i=1;i<=n;i++)
//    {
//        scanf("%d", &t);
//        a[t].val++;
//    }
//    sort(a+1, a+n, cmp);
//    for(int i=1;i<=n;i++)
//    {
//        if(a[i].val == 0) continue;
//        printf("%d %d\n", a[i].no, a[i].val);
//    }
//    return 0;
//}

#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int a[1005];
    int n, num;
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &num);
        a[num]++;
    }
    for(int i=1005;i>0;i--)
    {
        for(int j=0;j<1005;j++)
        {
            if(a[j] == i)
            {
                printf("%d %d\n", j, a[j]);
            }
        }
    }
    return 0;
}

//i从大往小，保证最大的值首先排到，并和相应的a[j]匹配
