#include <stdio.h>
#include <stdlib.h>
int c[100000001];
void sieve() {
    int i, j;
    c[0] = c[1] = 1;
    for (i = 2; i <= 10000; i++) {
        if (c[i] == 0) {
            for (j = 2*i; j < 100000001; j += i) {
                c[j] = 1;
            }
        }
    }
}
int truncatable(int n) {
    int p = 10;
    if (c[n] == 1) {
        return 0;
    }
    while (p < n) {
        if (c[n/p] == 1 || c[n%p] == 1) {
            return 0;
        }
        p *= 10;
    }
    return 1;
}
int main()
{
    sieve();
    int nr, n, s = 0;
    nr = 0;
    n = 11;
    truncatable(3979);
    while (nr < 11) {
        if (truncatable(n) == 1) {
            s += n;
            nr++;
        }
        n++;
    }
    printf("%d", s);

    return 0;
}
