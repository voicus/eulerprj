#include <stdio.h>
#include <stdlib.h>
int st[10], v[10];
int c[100000001];
int m;
void bkt(int n, int k) {
    int i, nr = 0;
    if (k == n) {
        for (i = 0; i < n; i++) {
            nr *= 10;
            nr += st[i];
        }
        if (c[nr] == 0) {
            m = nr;
        }
    } else {
        if (m > 0) {
            return;
        }
        for (i = n; i > 0; i--) {
            if (v[i] == 0) {
                v[i] = 1;
                st[k] = i;
                bkt(n, k+1);
                v[i] = 0;
            }
        }
    }
}
void ciur() {
    int i, j;
    for (i = 2; i <= 10000; i++) {
        if (c[i] == 0) {
            for (j = 2*i; j < 100000001; j += i) {
                c[j] = 1;
            }
        }
    }
}
int main()
{
    m = 0;
    ciur();
    bkt(7, 0);
    if (m == 0) {
        bkt(4, 0);
    }
    printf("%d", m);



    return 0;
}
