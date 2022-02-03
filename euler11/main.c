#include <stdio.h>
#include <stdlib.h>
int v[25][25];
int main()
{
    FILE*in = fopen("euler.in", "r");
    int p = 0, i, j;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            fscanf(in, "%d", &v[i][j]);
        }
    }
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            if (v[i][j]*v[i][j+1]*v[i][j+2]*v[i][j+3] > p) {
                p = v[i][j]*v[i][j+1]*v[i][j+2]*v[i][j+3];
            }
            if (v[i][j]*v[i+1][j]*v[i+2][j]*v[i+3][j] > p) {
                p = v[i][j]*v[i+1][j]*v[i+2][j]*v[i+3][j];
            }
            if (v[i][j]*v[i+1][j+1]*v[i+2][j+2]*v[i+3][j+3] > p) {
                p = v[i][j]*v[i+1][j+1]*v[i+2][j+2]*v[i+3][j+3];
            }
            if (j >= 3) {
                if (v[i][j]*v[i+1][j-1]*v[i+2][j-2]*v[i+3][j-3] > p) {
                    p = v[i][j]*v[i+1][j-1]*v[i+2][j-2]*v[i+3][j-3];
                }
            }
        }
    }
    printf("%d", p);
    return 0;
}
