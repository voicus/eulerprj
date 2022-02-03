#include <stdio.h>
#include <stdlib.h>
int v[400];
void pow2(int n) {
    v[0] = 1;
    int s = 1;
    while (n > 0) {
        n--;
        int t = 0;
        int i;
        for (i = 0; i < s; i++) {
            v[i] *= 2;
            v[i] += t;
            t = v[i] / 10;
            v[i] %= 10;
        }
        while (t > 0) {
            v[s] += t;
            t = v[s] / 10;
            v[s] %= 10;
            s++;
        }
    }
}
int main()
{
    pow2(1000);
    int s = 0, i;
    for (i = 0; i < 400; i++) {
        s += v[i];
    }
    printf("%d", s);

    return 0;
}
