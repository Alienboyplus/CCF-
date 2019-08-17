#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
    int n, k, num=1;
    queue <int> q;
    scanf("%d%d", &n, &k);
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    while(q.size()>1)
    {
        int top = q.front();
        q.pop();
        if(num%k != 0 && (num-num/10 * 10)!=k)
        {
            q.push(top);
        }
        num++;
    }
    printf("%d", q.front());
    return 0;
}
