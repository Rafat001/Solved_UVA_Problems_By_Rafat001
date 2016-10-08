#include <stdio.h>
int main ()
{
    int n;
    while ( scanf ("%d", &n) && n )
    {
        int output = 0;
        int full;

        while ( n > 1 )
        {
            if ( n == 2 )
            {
                output++;
                break;
            }
            full = n / 3;
            output += full;
            n -= n / 3 * 3;
            n += full;
        }

        printf ("%d\n", output);
    }

    return 0;
}
