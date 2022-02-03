#include <stdio.h>
#include <stdlib.h>
int c[1000001];
int s[1000000];
int sieve() {
    int i, j, k = 1;
    c[0] = c[1] = 1;
    for (i = 2; i <= 1000; i++) {
        if (c[i] == 0) {
            for (j = 2*i; j < 1000001; j+= i) {
                c[j] = 1;
            }
        }
    }
    for (i = 2; s[k-1] + i < 1000000; i++) {
        if (c[i] == 0) {
            s[k] = s[k-1] + i;
            k++;
        }
    }
    return k;
}
int main()
{
    int n;
    n = sieve();
    int i, j, k;
    for (j = n-1; j > 0; j--) {
        i = 0;
        k = j;
        while (k < n) {
            if (c[s[k] - s[i]] == 0) {
                printf("%d", s[k] - s[i]);
                return 0;
            }
            k++;
            i++;
        }
    }


    return 0;
}
