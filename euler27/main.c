#include <stdio.h>
#include <stdlib.h>
int c[100000000];
int quadratic(int a, int b) {
    int i;
    for (i = 0; i < 10000; i++) {
        if (i*i + i*a + b < 0 ||c[i*i + i*a + b] == 1) {
            return i;
        }
    }
}
void ciur(int n) {
    int i, j;
    c[0] = 1;
    c[1] = 1;
    for (i = 2; i <= n; i++) {
        if (c[i] == 0) {
            for (j = 2 * i; j <= n * n; j+= i) {
                c[j] = 1;
            }
        }
    }
}
int main()
{
    ciur(10000);
    int i, j;
    int max = -1;
    int a, b;
    quadratic(1, 41);
    for (i = -999; i < 1000; i++) {
        for (j = -1000; j < 1001; j++) {
            if (quadratic(i, j) > max) {
                max = quadratic(i, j);
                a = i;
                b = j;
            }
        }
    }
    printf("%d", a*b);

    return 0;
}
