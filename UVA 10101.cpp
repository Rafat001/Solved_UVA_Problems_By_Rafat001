#include<stdio.h>
int main()
{
    long long n,kuti,lac,hajar,shoto,lac1,hajar1,shoto1,r,r1,test=1,hajar1_r,lac1_r,lac_r=0,hajar_r=0,shoto_r=0,kuti_r,kuti1,kuti1_r=0;
    while(scanf("%lld",&n)==1)
    {
        kuti1=0,kuti1_r=0,kuti=0,lac=0,hajar=0,shoto=0,lac1=0,hajar1=0,shoto1=0,r=0,r1=0,lac1_r=0,hajar1_r=0,lac_r=0,hajar_r=0,shoto_r=0,kuti_r=0;
        kuti=n/10000000;
        kuti_r=n%10000000;
        if(kuti>=100)
        {
            kuti1=kuti/10000000;
            kuti1_r=kuti%10000000;
            lac1=kuti1_r/100000;
            lac1_r=kuti1_r%100000;
            hajar1=lac1_r/1000;
            hajar1_r=lac1_r%1000;
            shoto1=hajar1_r/100;
            r1=hajar1_r%100;
        }
        lac=kuti_r/100000;
        lac_r=kuti_r%100000;
        hajar=lac_r/1000;
        hajar_r=lac_r%1000;
        shoto=hajar_r/100;
        r=hajar_r%100;
        printf("%4lld.",test);
        if(n==0)
        {
            printf(" 0");
        }
        if(kuti1>0)
        {
            printf(" %lld kuti",kuti1);
        }
        if(lac1>0)
        {
            printf(" %d lakh",lac1);
        }
        if(hajar1>0)
        {
            printf(" %lld hajar",hajar1);
        }
        if(shoto1>0)
        {
            printf(" %lld shata",shoto1);
        }
        if(r1>0)
        {
            printf(" %lld kuti",r1);
        }
        if((kuti1_r==0 || lac1_r==0 || hajar1_r==0 || r1==0)&& kuti>=100)
        {
            printf(" kuti");
        }
        else if(kuti>0 && r1==0 && kuti_r!=0)
        {
            printf(" %lld kuti",kuti);
        }
        if(kuti_r==0 && kuti<=99 && n!=0)
        {
            printf(" %lld kuti",kuti);
        }
        if(lac>0)
        {
            printf(" %lld lakh",lac);
        }
        if(hajar>0)
        {
            printf(" %lld hajar",hajar);
        }
        if(shoto>0)
        {
            printf(" %lld shata",shoto);
        }
        if(r>0)
        {
            printf(" %lld",r);
        }
        printf("\n");
        test++;
    }
    return 0;
}
