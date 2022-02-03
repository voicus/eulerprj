// TODO: fix it
#include <stdio.h>
#include <stdlib.h>
int s[16];
int v[22];
int f[22][16];
int verif(int n) {
    int nr = 0;
    int i;
    for (i = 0; i < 16; i++) {
        if (s[i] == f[n][i]) {
            nr++;
        }
    }
    if (nr == v[i]) {
        return 1;
    } else {
        return 0;
    }
}
void bkt(int n) {
    if (n == 16) {
        int i, j = 1;
        for (i = 0; i < 22; i++) {
            if (verif(i) == 0) {
                j = 0;
            }
        }
        if (j == 1) {
            for (i = 0; i < 16; i++) {
                printf("%d ", s[i]);
            }
        }
    } else {
        int i;
        for (i = 0; i < 10; i++) {
            s[n] = i;
            bkt(n+1);
            s[n] = 0;
        }
    }
}
int main()
{
    int i, j;
    FILE*in = fopen("euler.in", "r");
    for (i = 0; i < 22; i++) {
        s[i] = -1;
        for (j = 0; j < 16; j++) {
            fscanf(in, "%d", &f[i][j]);
        }
        fscanf(in, "%d", &v[i]);
    }
    bkt(0);



    return 0;
}
