#include <stdio.h>
#include <stdlib.h>
int factorial(int n) {
    int p = 1;
    while (n > 1) {
        p *= n;
        n--;
    }
    return p;
}
int verif(int n) {
    int c = n;
    int p = 0;
    while (c > 0) {
        p += factorial(c%10);
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
    for (i = 3; i < 400000; i++) {
        if (verif(i) == 1) {
            s += i;
        }
    }
    printf("%d", s);



    return 0;
}
