#include <stdio.h>
#include <stdlib.h>
int s[1001];
int main()
{
    int a, b, c;
    for (a = 1; a < 334; a++) {
        for (b = a; b < 500; b++) {
            for (c = b + 1; c <= 1000 - a - b; c++) {
                if (c*c - a*a - b*b == 0) {
                    s[a+b+c]++;
                }
            }
        }
    }
    int m = 0;
    for (a = 3; a < 1001; a++) {
        if (s[a] > s[m]) {
            m = a;
        }
    }
    printf("%d", m);


    return 0;
}
