#include <stdio.h>
#include <stdlib.h>
int addsqdigits(int n) {
    int s = 0;
    while (n > 0) {
        s += (n%10)*(n%10);
        n /= 10;
    }
    return s;
}
int main()
{
    int n = 9999999;
    int s = 0, c;
    while (n > 1) {
        c = n;
        while (c != 89 && c != 1) {
            c = addsqdigits(c);
        }
        if (c == 89) {
            s++;
        }
        n--;
    }
    printf("%d", s);


    return 0;
}
