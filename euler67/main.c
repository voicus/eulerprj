#include <stdio.h>
#include <stdlib.h>
int v[101][101];
int s[101][101];
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main()
{
    FILE*in = fopen("euler.in", "r");
    int n = 15;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            fscanf(in, "%d", &v[i][j]);
            s[i][j] = max(s[i-1][j-1], s[i-1][j]) + v[i][j];
        }
    }
    j = 0;
    for (i = 1; i <= n; i++) {
        if (s[n][i] > j) {
            j = s[n][i];
        }
    }
    printf("%d", j);

    return 0;
}
