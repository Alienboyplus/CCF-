#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int a[25][7];
//    int b[105];
    int n, num;
    memset(a, 0, sizeof(a));
//    for(int i=1;i<=20;i++)
//    {
//        for(int j=1;j<=5;j++)
//        {
//            a[i][j] = 0;
//        }
//        b[i] = 0;
//    }
    scanf("%d", &n);
    while(n--)
    {
        int count = 0;
        scanf("%d", &num);
        for(int i=1;i<=20;i++)
        {
            if(num == 0) break;
            if(5-a[i][6] >= num)
            {
                for(int j=1;j<=5;j++)
                {
                    if(a[i][j] == 1) count++;
                    else
                    {
                        if(num != 0)
                        {
                            count++;
                            a[i][j]++;
 //                           b[i]++;
                            a[i][6]++;
                            num--;
                            printf("%d ", count);
                        }
                    }
                }
            }
            else count += 5;
        }
        printf("\n");
    }
    return 0;
}
