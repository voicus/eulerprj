#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    n = 28433;
    int i;
    int l = 7830457;
    for (i = 0; i < l; i++) {
        n *= 2;
        n %= 10000000000;
    }
    n++;
    printf("%lld", n);



    return 0;
}
