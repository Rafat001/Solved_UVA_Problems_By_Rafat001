#include<stdio.h>
#include<stdlib.h>
int main()
{
    double degree,h,m,h_angle,m_angle;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;
        h_angle=h*30+(m/60)*30;
        m_angle=6*m;
        if(h_angle>m_angle)
            degree=h_angle-m_angle;
        else
            degree=m_angle-h_angle;
        if(degree>180)
            degree=360-degree;
        printf("%.3lf\n",degree);
    }
    return 0;
}
