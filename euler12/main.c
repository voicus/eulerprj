#include <stdio.h>
#include <stdlib.h>
int divisors(long long int n) {
    int i;
    int d = 2;
    for (i = 2; i * i <= n; i++) {
        if (n%i == 0) {
            d += 2;
            if (i * i == n) {
                d--;
                return d;
            }
        }
    }
    return d;
}
int main()
{
    long long int n = 500;
    while (divisors((n*(n+1))/2) < 500) {
        n++;
    }
    printf("%lld", n*(n+1)/2);


    return 0;
}
