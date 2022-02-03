#include <stdio.h>
#include <stdlib.h>
int d[100000];
int sumdiv(int n) {
    int s = 1;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (i * i == n) {
            s += i;
            return s;
        }
        if (n % i == 0) {
            s += i + n/i;
        }
    }
    return s;
}
int main()
{
    int i;
    for (i = 2; i <= 10000; i++) {
        d[i] = sumdiv(i);
    }
    int s = 0;
    for (i = 2; i <= 10000; i++) {
        if (i == d[d[i]] && i != d[i]) {
            s += i;
        }
    }
    printf("%d", s);

    return 0;
}
