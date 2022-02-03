#include <stdio.h>
#include <stdlib.h>
int a[30000];
int v[60000];
int abundant(int n) {
    int s = 1;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (i * i == n) {
            s += i;
            break;
        }
        if (n % i == 0) {
            s += i + n/i;
        }
    }
    if (s > n) {
        return 1;
    }
    return 0;
}
int main()
{
    int n = 0, i;
    for (i = 12; i < 29000; i++) {
        if (abundant(i) == 1) {
            a[n] = i;
            n++;
        }
    }
    int j;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            v[a[i] + a[j]] = 1;
        }
    }
    long long int s = 0;
    for (i = 0; i < 28124; i++) {
        if (v[i] == 0) {
            s += i;
        }
    }
    printf("%lld", s);
    return 0;
}
