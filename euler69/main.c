#include <stdio.h>
#include <stdlib.h>
int p(int n) {
    int i;
    int r, x;
    int s = 1;
    int c = n;
    for (i = 2; i < c; i++) {
        x = i;
        n = c;
        while (x > 0) {
            r = n%x;
            n = x;
            x = r;
        }
        if (n == 1) {
            s++;
        }
    }
    return s;
}
int main()
{
    int n;
    float max = 0, r;
    int s = 2;
    for (n = 2; n <= 1000000; n++) {
        r = (float)n/p(n);
        if (r > max) {
            max = r;
            s = n;
        }
    }
    printf("%d", s);

    return 0;
}
