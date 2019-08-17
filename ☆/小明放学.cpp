#include<stdio.h>
int main()
{
    long long light[3], num;
    long long total=0;
    scanf("%lld%lld%lld", &light[0], &light[2], &light[1]);
    scanf("%lld", &num);
    int a, b;
    long long sum = light[0] + light[1] + light[2];
    for(int i=0;i<num;i++)
    {
        scanf("%d%d", &a, &b);
        if(a == 0)
        {
            total = total + b;
        }
        else
        {
            if(a == 1)
            {
                a = 0;
            }
            else if(a == 3)
            {
                a = 1;
            }
            b = (light[a]-b+total)%sum;
            while(b>light[a])
            {
                b = b - light[a];
                a = (a+1)%3;
            }
            if(a == 0)
            {
                total += light[a] - b;
            }
            else if(a == 2)
            {
                total += light[a] - b + light[0];
            }
        }
    }
    printf("%lld", total);
    return 0;
}
