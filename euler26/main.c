#include <stdio.h>
#include <stdlib.h>
int v[1002] = {0};
void clearv() {
    int i;
    for (i = 0; i <= 1000; i++) {
        v[i] = 0;
    }
}
int cycle(int n) {
    int d = 1;
    int i = 1;
    while (1) {
        while (d < n) {
            d *= 10;
        }
        d = d % n;
        if (v[d] > 0) {
            int j = v[d];
            clearv();
            return i - j;
        }
        v[d] = i;
        i++;
        if (d == 0) {
            clearv();
            return 0;
        }
    }
}
int main()
{
    int n = 0;
    int m = 0;
    int nm = 0;
    for (n = 3; n < 1000; n++) {
        clearv();
        if (m < cycle(n)) {
            nm = n;
            m = cycle(n);
        }
    }
    printf("%d", nm);


    return 0;
}
