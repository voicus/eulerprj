#include <stdio.h>
#include <stdlib.h>
int v[1000001];
void ciur(int n) {
    v[1] = v[0] = 1;
    int i, j;
    for (i = 2; i <= n; i++) {
        if (v[i] == 0) {
            for (j = 2*i; j <= n*n; j+= i) {
                v[j] = 1;
            }
        }
    }
}
int verif(int n, int c, int p) {
    int i, j;
    for (i = 0; i < c; i++) {
        if (v[n] == 1) {
            return 0;
        }
        j = n % 10;
        n /= 10;
        n += j*p;
    }
    return 1;
}
int main()
{
    ciur(1000);
    int i, p = 10, c = 1, n = 0;
    for (i = 2; i < 1000000; i++) {
        if (i == p) {
            p *= 10;
            c++;
        }
        if (verif(i, c, p/10) == 1) {
            n++;
        }
    }
    printf("%d", n);


    return 0;
}
