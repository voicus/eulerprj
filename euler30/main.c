#include <stdio.h>
#include <stdlib.h>
int verif(int n) {
    int c = n;
    int p = 0;
    while (c > 0) {
        p += (c%10)*(c%10)*(c%10)*(c%10)*(c%10);
        c /= 10;
    }
    if (p == n) {
        return 1;
    } else {
        return 0;
    }
}
int main()
{
    int s = 0;
    int i;
    for (i = 2; i < 300000; i++) {
        if (verif(i) == 1) {
            s += i;
        }
    }
    printf("%d", s);



    return 0;
}
