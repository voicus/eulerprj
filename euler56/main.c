#include <stdio.h>
#include <stdlib.h>
int v[201], s;
void sumcheck() {
    int i, m = 0;
    for (i = 0; i < 201; i++) {
        m += v[i];
    }
    if (m > s) {
        s = m;
    }
}
void power(int n) {
    int i, j, t = 0;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 201; j++) {
            v[j] *= n;
            v[j] += t;
            t = v[j]/10;
            v[j] %= 10;
        }
        sumcheck();
    }
}
int main()
{
    s = 1;
    int i, j;
    for (i = 2; i <= 100; i++) {
        for (j = 0; j < 201; j++) {
            v[j] = 0;
        }
        v[0] = 1;
        power(i);
    }
    printf("%d", s);

    return 0;
}
