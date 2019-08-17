#include<stdio.h>
#include<algorithm>
using namespace std;

struct teacher
{
    int id;//Կ�����
    int time;//��ʾ��ʼʱ��������ս�����ʱ��
    int sign;//�����ȡ���ǻ�
};

bool cmp(teacher a, teacher b)
{
    if(a.time != b.time)
    {
        return a.time < b.time;
    }
    else
    {
        if(a.sign != b.sign)
        {
            return a.sign < b.sign;
        }
        else return a.id < b.id;
    }
}

int main()
{
    int n, k, w, s, c;
    int b[1005];
    struct teacher arr[2005];
    scanf("%d%d", &n, &k);
    for(int i=0;i<k;i++)
    {
        scanf("%d%d%d", &w, &s, &c);
        arr[2*i].id = w;
        arr[2*i].time = s;
        arr[2*i].sign = 1;
        arr[2*i+1].id = w;
        arr[2*i+1].time = s+c;
        arr[2*i+1].sign = -1;
    }//��¼ÿ����ʦȡ/�黹Կ�׵���Ϣ
    sort(arr, arr+2*k, cmp);//��С��������
    for(int i=1;i<=n;i++)
    {
        b[i] = i;
    }//��ʼ��ÿһ��Կ�׵�λ��
    for(int i=0;i<=2*k;i++)
    {
        if(arr[i].sign == 1)
        {
            for(int j=1;j<=n;j++)
            {
                if(b[j] == arr[i].id)
                {
                    b[j] = 0;
                }
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(b[j] == 0)
                {
                    b[j] = arr[i].id;
                    break;
                }
            }
        }
    }
    for(int j=1;j<=n;j++)
    {
        printf("%d ", b[j]);
    }
    return 0;
}
