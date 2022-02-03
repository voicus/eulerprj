#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    long long int s, m;
    s = 0;
    for (i = 1; i <= 1000; i++) {
        m = 1;
        for (j = 1; j <= i; j++) {
            m *= i;
            m %= 10000000000;
        }
        s += m;
        s %= 10000000000;
    }
    printf("%lld", s);



    return 0;
}
