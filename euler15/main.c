#include <stdio.h>
#include <stdlib.h>
long long unsigned int v[21][21];
int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    n++;
    for (i = 0; i < n; i++) {
        v[i][0] = 1;
        v[0][i] = 1;
    }
    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            v[i][j] = v[i-1][j] + v[i][j-1];
        }
    }
    printf("%llu", v[n-1][n-1]);
    return 0;
}
