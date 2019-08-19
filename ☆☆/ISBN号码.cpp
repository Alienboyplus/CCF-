#include<stdio.h>
using namespace std;
int main()
{
    char s[20];
    gets(s);
    int sum = (s[0]-'0')*1+(s[2]-'0')*2+(s[3]-'0')*3+(s[4]-'0')*4+(s[6]-'0')*5+(s[7]-'0')*6+(s[8]-'0')*7+(s[9]-'0')*8+(s[10]-'0')*9;
    if(sum % 11 == s[12]-'0' || sum%11 == 10 && s[12] == 'X') printf("Right");
    else
    {
        if(sum%11 != 10)
        {
            s[12] = sum%11 + '0';
            puts(s);
        }
        else
        {
            s[12] = 'X';
            puts(s);
        }
    }
    return 0;
}

//intתchar: +'0'
//charתint: -'0'
