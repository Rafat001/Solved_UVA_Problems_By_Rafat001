#include <stdio.h>

int main()
{
    int low,high,M=1,T,J;
    scanf("%d",&T);

    for( J = 1 ; J <= T ; J++)
    {
        scanf("%d%d",&low,&high);
        int i ;

        int sum = 0 ;

        for( i = low ; i<= high ; i++ )
        {
            if( i%2==1 )
            {
                sum += i;
            }
        }

        printf("Case %d: %d\n",J,sum);
    }
    return 0 ;
}
