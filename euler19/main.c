#include <stdio.h>
#include <stdlib.h>
int v[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leapyear(int n) {
    if (n %100 != 0 && n % 4 == 0) {
        return 1;
    }
    if (n % 400 == 0) {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    int s = 2;
    int i;
    int nr = 0;
    for (n = 1901; n < 2001; n++) {
        for (i = 0; i < 12; i++) {
            if (s == 0) {
                nr++;
            }
            if (i == 1) {
                s += leapyear(n);
            }
            s += v[i];
            s %= 7;
        }
    }
    printf("%d", nr);


    return 0;
}
