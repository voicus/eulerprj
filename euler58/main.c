#include <stdio.h>
#include <stdlib.h>
int prim(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int s = 3, t = 5, i = 2, j;
    int n = 9;
    while (t <= 10*s) {
        i += 2;
        for (j = 0; j < 4; j++) {
            n += i;
            if (prim(n) == 1) {
                s++;
            }
        }
        t += 4;
    }
    printf("%d", i+1);


    return 0;
}
