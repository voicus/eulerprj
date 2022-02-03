#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE*in = fopen("euler.in", "r");
    char c;
    int s = 0;
    fscanf(in, "%c", &c);
    while (c >= '0' && c <= '9') {
        s += c - '0';
        fscanf(in, "%c", &c);
    }
    printf("%d", s);

    return 0;
}
