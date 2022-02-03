#include <stdio.h>
#include <stdlib.h>
int v[5051];
int main()
{
    int s;
    int i;
    for (i = 1; i < 101; i++) {
        v[(i*(i+1))/2] = 1;
    }
    int sol = 0;
    FILE*in = fopen("euler.in", "r");
    char c = ',';
    while (c == ',') {
        s = 0;
        fscanf(in, "%c", &c);
        while (c <= 'Z' && c >= 'A') {
            s += c - 'A' + 1;
            fscanf(in, "%c", &c);
        }
        if (v[s] == 1) {
            sol++;
        }
    }
    printf("%d", sol);
    return 0;
}
