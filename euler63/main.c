#include <stdio.h>
#include <stdlib.h>
int v[21];
int n;
int val(int i) {
    int t = 0;
    int k;
    while (1) {
        for (k = 0; k < n; k++) {
            v[k] *= i;
            v[k] += t;
            t = v[k]/10;
            v[k] %= 10;
        }
        if (t == 0) {
            return n;
        } else {
            v[n] = t;
            n++;
        }
    }
}
int main()
{
    int i;
    int s = 0;
    for (i = 1; i < 10; i++) {
        v[0] = i;
        n = 1;
        s += val(i);
    }
    printf("%d", s);



    return 0;
}
