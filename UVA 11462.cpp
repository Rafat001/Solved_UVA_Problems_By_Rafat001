#include<stdio.h>
#include<algorithm>
using namespace std;
long a[2000005],i,j,x,n;
int main()
{
    while(scanf("%ld",&n)==1)
        {
            if(n==0)
            {
                break;
            }
            for(i=0; i<n; i++)
            {
                scanf("%ld",&a[i]);
            }
            sort(a,a+n);
            for(i=0; i<n; i++)
            {
                printf("%ld",a[i]);
                if(i<n-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    return 0;
}
