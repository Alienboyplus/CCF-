#include<stdio.h>
using namespace std;
int main()
{
    char s[20];
    int sum = 0;
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        sum = sum + (s[i]-'0');
    }
    printf("%d", sum);
    return 0;
}
