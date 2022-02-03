#include <stdio.h>
#include <stdlib.h>
int p[10000];
int find(int n) {
    int l, r, m;
    l = 1;
    r = 10000;
    while (l <= r) {
        m = l+r;
        m /= 2;
        if (p[m] == n) {
            return m;
        } else {
            if (p[m] < n) {
                l = m+1;
            } else {
                r = m-1;
            }
        }
    }
    return 0;
}
int main()
{
    int i, j, d = 300000000;
    for (i = 1; i < 10001; i++) {
        p[i] = i*(3*i-1);
        p[i] /= 2;
    }
    for (i = 1; i < 10000; i++) {
        for (j = i+1; j <= 10000; j++) {
            if (find(p[j] - p[i]) > 0 && find(p[j] + p[i]) && p[j] - p[i] < d) {
                d = p[j] - p[i];
            }
        }
    }
    printf("%d", d);


    return 0;
}
