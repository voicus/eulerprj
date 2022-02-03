#include <stdio.h>
#include <stdlib.h>
int f[10];
int v[100000000];
int pandigital(int a, int b, int c) {
    int i;
    if (v[c] == 1) {
        return 0;
    }
    for (i = 0; i < 10; i++) {
        f[i] = 0;
    }
    while (a > 0) {
        f[a%10]++;
        a /= 10;
    }
    while (b > 0) {
        f[b%10]++;
        b /= 10;
    }
    while (c > 0) {
        f[c%10]++;
        c /= 10;
    }
    if (f[0] > 0) {
        return 0;
    }
    for (i = 1; i < 10; i++) {
        if (f[i] != 1) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int s = 0;
    int i, j;
    for (i = 0; i < 10000; i++) {
        for (j = i + 1; j < 10000; j++) {
            if (pandigital(i, j, i*j) == 1) {
                s += i*j;
                v[i*j] = 1;
            }
        }
    }
    printf("%lld", s);


    return 0;
}
