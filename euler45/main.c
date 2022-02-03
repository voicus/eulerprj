#include <stdio.h>
#include <stdlib.h>
long long int t[200001], p[200001], h[30001];
int main()
{
    int j;
    int i, k;
    j = 166;
    k = 144;
    for (i = 1; i < 200001; i++) {
        t[i] = (i*(i+1))/2;
        p[i] = (i*(3*i-1))/2;
    }
    for (i = 1; i < 30001; i++) {
        h[i] = i*(2*i-1);
    }
    i = 286;
    while (t[i] != p[j] || t[i] != h[k]) {
        if (t[i] < p[j] && t[i] < h[k]) {
            i++;
        } else {
            if (t[i] >= p[j] && p[j] < h[k]) {
                j++;
            } else {
                k++;
            }
        }
    }
    for (i = 1; i < 200001; i++) {
        printf("%d %d\n", t[i], p[i]);
    }
    for (i = 1; i < 30001; i++) {
        printf("%d\n", h[i]);
    }
    printf("%lld", t[i]);
    return 0;
}
