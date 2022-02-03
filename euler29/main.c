#include <stdio.h>
#include <stdlib.h>
int v[1001][1001];
void equalpw(int a, int b) {
    v[a][b] = 1;
    int i, x, j;
    for (i = 2; i * i <= a; i++) {
        x = i*i;
        for (j = 2; x <= a; j++) {
            if (x == a) {
                a = i;
                b *= j;
            }
            x *= i;
        }
    }
    x = a*a;
    i = 2;
    while (x < 1001 && i < b) {
        if (b % i == 0) {
            v[x][b/i] = 1;
        }
        i++;
        x *= a;
    }
}
int main()
{
    int a, b, s;
    s = 0;
    for (a = 2; a <= 100; a++) {
        for (b = 2; b <= 100; b++) {
            if (v[a][b] == 0) {
                s++;
                equalpw(a, b);
            }
        }
    }
    printf("%d", s);



    return 0;
}
