#include<bits/stdc++.h>
using namespace std;
double rad(double x)
{
    return x*acos(-1)/180;
}
int main()
{
    //freopen("output.txt","w",stdout);
    double l,w,h,t;
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&t)!=EOF)
    {
        double recArea=l*w*h;
        double kunA,kunB,kunC;
        kunB=rad(t);
        kunA=rad(180-(90+t));
        kunC=rad(90);
        double a=l;
        double b=a*(sin(kunB)/sin(kunA));
        double c=a*(sin(kunC)/sin(kunA));
        double s=(a+b+c)/2;
        double areaT=sqrt(s*(s-a)*(s-b)*(s-c));
        double hh=areaT/(0.5*c);
        double prism=0.5*c*hh*w;
        double ans=recArea-prism;
        if(b<=h)
            cout<<fixed<<setprecision(3)<<recArea-prism<<" mL"<<endl;
        else
        {
            kunB=rad(t);
            kunA=rad(180-(90+t));
            kunC=rad(90);
            b=h;
            a=b*(sin(kunA)/sin(kunB));
            c=a*(sin(kunC)/sin(kunA));
            s=(a+b+c)/2;
            areaT=sqrt(s*(s-a)*(s-b)*(s-c));
            hh=areaT/(0.5*c);
            prism=0.5*c*hh*w;
            ans=recArea-prism;
            cout<<fixed<<setprecision(3)<<prism<<" mL"<<endl;
        }
    }
}
