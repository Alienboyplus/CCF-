#include<stdio.h>
using namespace std;

int main()
{
    int y, d, k, i=1;
    scanf("%d%d", &y, &d);
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
    {
        month[2]++;
    }
    while(d > 0)
    {
        k = d;
        d = d-month[i];
        i++;
    }
    printf("%d\n%d", i-1, k);
    return 0;
}
