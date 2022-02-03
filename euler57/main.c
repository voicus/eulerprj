#include <stdio.h>
#include <stdlib.h>
int a[1000];
int b[1000];
int c[1000];
int d[1000];
int x, y;
void add() {
    int t = 0;
    int i;
    int n, m;
    for (i = 0; i < y; i++) {
        c[i] = a[i];
        d[i] = b[i];
    }
    n = x;
    m = y;
    for (i = 0; i < y || i < x; i++) {
        b[i] = a[i] + b[i] + t;
        t = b[i]/10;
        b[i] %= 10;
    }
    if (x > y) {
        y = x;
    }
    while (t > 0) {
        b[y] = t%10;
        t /= 10;
        y++;
    }
    for (i = 0; i < y; i++) {
        a[i] = d[i] + b[i] + t;
        t = a[i]/10;
        a[i] %= 10;
    }
    x = y;
    while (t > 0) {
        a[x] = t%10;
        t /= 10;
        x++;
    }
}

int main()
{
    a[0] = 3;
    b[0] = 2;
    x = 1;
    y = 1;
    int n = 2;
    int s = 0;
    while (n <= 1000) {
        add();
        if (x > y) {
            s++;
        }
        n++;
    }
    printf("%d", s);
    return 0;
}
