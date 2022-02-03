#include <stdio.h>
#include <stdlib.h>
int nrdiv(int n) {
    int i = 2;
    int c = 0;
    while (n > 1) {
        if (n%i == 0 ) {
            c++;
        }
        while (n % i == 0) {
            n /= i;
        }
        i++;
    }
    return c;
}
int main()
{
    int c = 0;
    int n = 210;
    while (c < 4) {
        if (nrdiv(n) == 4) {
            c++;
        } else {
            c = 0;
        }
        n++;
    }
    printf("%d", n-4);


    return 0;
}
