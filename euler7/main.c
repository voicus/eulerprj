#include <stdio.h>
#include <stdlib.h>
int v[1000];
int main()
{
    int i;
    char c;
    FILE*in = fopen("euler.in", "r");
    for (i = 0; i < 1000; i++) {
        fscanf(in, "%c", &c);
        v[i] = c - '0';
    }
    int j = 0;
    long long int p = 1;
    long long int max = 0;
    for (i = 0; i < 987; i++) {
        p = 1;
        for (j = i; j < i + 13; j++) {
            p *= v[j];
        }
        if (p > max) {
            max = p;
        }
    }
    printf("%lld", max);


    return 0;
}
