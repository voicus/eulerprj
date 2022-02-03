#include <stdio.h>
#include <stdlib.h>
int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
void shift(int k, int n) {
    int i;
    for (i = k; i < n-1; i++) {
        v[i] = v[i+1];
    }
}
int main()
{
    int n = 10;
    int nr = 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9;
    int i, j;
    int x = 1000000;
    for (i = 0; i < 10; i++) {
        for (j = 1; j <= n; j++) {
            if (j * nr >= x) {
                printf("%d ", v[j-1]);
                shift(j-1, n);
                x -= (j-1)*nr;
                n--;
                if (n == 0) {
                    return 0;
                }
                nr /= n;
                break;
            }
        }
    }



    return 0;
}
