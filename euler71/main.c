#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int p, q, a = 1, b = 0;
    for (q = 1000000; q > 2; q--) {
        p = (3 * q - 1) / 7;
        if (p == 428570) {
            p++;
            p--;
        }
        if (p * a > b * q) {
            a = q;
            b = p;
        }
    }
    printf("%lld/%lld", b, a);
}
