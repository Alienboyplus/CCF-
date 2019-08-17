#include<stdio.h>
using namespace std;
int main()
{
    float s, t;
    scanf("%f", &t);
    int tex[8];
    int base = 3500;
    tex[1] = 1500*0.03;
    tex[2] = 3000*0.1 + tex[1];
    tex[3] = 4500*0.2 + tex[2];
    tex[4] = 26000*0.25 + tex[3];
    tex[5] = 20000*0.3 + tex[4];
    tex[6] = 25000*0.35 + tex[5];
//    tex[7] = 20000*0.45 + tex[6];
    if(t<=base)
    {
        s = t;
    }
    else if(t>base && t<=base+1500-tex[1])
    {
        s = (t - 0.03*base)/(1-0.03);
    }
    else if(t>base+1500-tex[1] && t<=base+4500-tex[2])
    {
        s = (tex[1] + t - 0.1*base - 0.1*1500)/(1-0.1);
    }
    else if(t>base+4500-tex[2] && t<=base+9000-tex[3])
    {
        s = (tex[2] + t - 0.2*base - 0.2*4500)/(1-0.2);
    }
    else if(t>base+9000-tex[3] && t<=base+35000-tex[4])
    {
        s = (tex[3] + t - 0.25*base - 0.25*9000)/(1-0.25);
    }
    else if(t>base+35000-tex[4] && t<=base+55000-tex[5])
    {
        s = (tex[4] + t - 0.3*base - 0.3*35000)/(1-0.3);
    }
    else if(t>base+55000-tex[5] && t<=base+80000-tex[6])
    {
        s = (tex[5] + t - 0.35*base - 0.35*55000)/(1-0.35);
    }
    else
    {
        s = (tex[6] + t - 0.45*base - 0.45*80000)/(1-0.45);
    }

    printf("%.0f", s);
    return 0;
}
