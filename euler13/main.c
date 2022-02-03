#include <stdio.h>
#include <stdlib.h>
int v[53];
int s[50];
void sum() {
    int i, t = 0;
    for (i = 0; i < 50; i++) {
        v[i] += s[i] + t;
        t = v[i] / 10;
        v[i] %= 10;
    }
    while (t > 0) {
        v[i] += t;
        t = v[i] / 10;
        v[i] %= 10;
        i++;
    }
}
int main()
{
    FILE*in = fopen("euler.in", "r");
    char c;
    int i, j;
    for (i = 0; i < 100; i++) {
        for (j = 49; j >= 0; j--) {
            fscanf(in, "%c", &c);
            s[j] = c - '0';
        }
        fscanf(in, "%c", &c);
        sum();
    }
    for (i = 52; i >= 0; i--) {
        printf("%d", v[i]);
    }


    return 0;
}
