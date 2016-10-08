#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double d,v,u,fastest,shortest_velocity,cos,shortest;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        fastest=0,shortest_velocity=0,shortest=0,cos=0;
        scanf("%lf%lf%lf",&d,&v,&u);
        cos=-(v/u);
        shortest_velocity=u*sqrt(1-(cos*cos));
        fastest=d/u;
        shortest=d/shortest_velocity;
        if(v!=u)
        {
            if(fastest>shortest)
            {
                printf("Case %d: %.3lf\n",i,fastest-shortest);
            }
            else if(shortest>fastest)
            {
                printf("Case %d: %.3lf\n",i,shortest-fastest);
            }
            else
            {
                printf("Case %d: can't determine\n",i);
            }
        }
        else
        {
            printf("Case %d: can't determine\n",i);;
        }
    }
    return 0;
}

