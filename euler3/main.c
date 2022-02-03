#include <stdio.h>
#include <stdlib.h>
int verif(long long int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int i, max = 1, nr;
    nr = verif(5);
    for (i = 2; i * i < 600851475143; i++) {
        if (600851475143 % i == 0 && verif(i) == 1 && i > max) {
            max = i;
        }
        if (600851475143 % i == 0) {
            nr = 600851475143 / i;
            if (verif(nr) == 1 && nr > max) {
                max = nr;
            }
        }
    }
    printf("%lld", max);

    return 0;
}
