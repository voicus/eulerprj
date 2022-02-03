#include <stdio.h>
#include <stdlib.h>
int st[1000001];
int verif(int n, int k) {
    int i;
    for (i = 1; i < k && st[i] * st[i] <= n; i++) {
        if (n % st[i] == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n = 1;
    st[0] = 2;
    long long int s = 2;
    int i;
    for (i = 3; i < 2000000; i+= 2) {
        if (verif(i, n) == 1) {
            st[n] = i;
            n++;
            s += i;
        }
    }
    printf("%d", s);


    return 0;
}
