#include<iostream>
using namespace std;

bool isMD(char op)
{
    if(op == 'x' || op == '/') return true;
    else return false;
}

int op(char my_op, int a, int b)
{
    switch(my_op)
    {
        case '+':return(a+b);
        case '-':return(a-b);
        case 'x':return(a*b);
        case '/':return(a/b);
    }
}

int main()
{
    int n, tot, num1, num2, num3, num4;
    char op1, op2, op3;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        num1 = s[0] - '0'; num2 = s[2] - '0'; num3 = s[4] - '0'; num4 = s[6] - '0';
        op1 = s[1]; op2 = s[3]; op3 = s[5];
        if(isMD(op2))
        {
            if(isMD(op1))
            {
                tot = op(op3, op(op2, op(op1, num1, num2), num3), num4);
            }
            else
            {
                if(isMD(op3))
                {
                    tot = op(op1, num1, op(op3, op(op2, num2, num3), num4));
                }
                else
                {
                    tot = op(op3, op(op1, num1, op(op2, num2, num3)), num4);
                }
            }
        }
        else
        {
            if(isMD(op1))
            {
                if(isMD(op3))
                {
                    tot = op(op2, op(op1, num1, num2), op(op3, num3, num4));
                }
                else
                {
                    tot = op(op3, op(op2, op(op1, num1, num2), num3), num4);
                }
            }
            else
            {
                if(isMD(op3))
                {
                    tot = op(op2, op(op1, num1, num2), op(op3, num3, num4));
                }
                else
                {
                    tot = op(op3, op(op2, op(op1, num1, num2), num3), num4);
                }
            }
        }
        if(tot == 24) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
