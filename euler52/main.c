#include <stdio.h>
#include <stdlib.h>
int v[10];
int f[10];
int verif(int n) {
    int i, c, j;
    for (j = 0; j < 10; j++) {
        f[j] = 0;
    }
    for (i = 2; i <= 6; i++) {
        c = i*n;
        while (c > 0) {
            f[c%10]++;
            c /= 10;
        }
        c = i*n;
        for (j = 0; j < 10; j++) {
            if (f[j] != v[j]) {
                return 0;
            }
        }
        for (j = 0; j < 10; j++) {
            f[j] = 0;
        }
    }
    return 1;
}
int main()
{
    int n = 166666;
    int i = 100000;
    int p = i;
    int c;
    int k = 0;
    while (p <= 10000000) {
        for (i = p; i < n; i++) {
            c = i;
            while (c > 0) {
                v[c%10]++;
                c /= 10;
            }
            k = verif(i);
            if (k == 1) {
                printf("%d", i);
                return 0;
            }
            for (c = 0; c < 10; c++) {
                v[c] = 0;
            }
        }
        p *= 10;
        n *= 10;
        n += 6;
    }


    return 0;
}
