//�������Ҫ����ĵط����ǣ����ֱ�����㣬��ô������ֵ�ص�ʱ��������
//���������ȡ�෴�����þ���ֵ�Ƚ�

#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int a[35][35];
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-2;j++)
        {
            if(abs(a[i][j]) == abs(a[i][j+1]) && abs(a[i][j+1]) == abs(a[i][j+2]))
            {
                if(a[i][j] > 0) a[i][j] = -a[i][j];
                if(a[i][j+1] > 0) a[i][j+1] = -a[i][j+1];
                if(a[i][j+2] > 0) a[i][j+2] = -a[i][j+2];
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n-2;i++)
        {
            if(abs(a[i][j]) == abs(a[i+1][j]) && abs(a[i+1][j]) == abs(a[i+2][j]))
            {
                if(a[i][j] > 0) a[i][j] = -a[i][j];
                if(a[i+1][j] > 0) a[i+1][j] = -a[i+1][j];
                if(a[i+2][j] > 0) a[i+2][j] = -a[i+2][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] < 0) printf("0 ");
            else printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
