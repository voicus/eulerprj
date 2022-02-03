#include <stdio.h>
#include <stdlib.h>
int palindrom (int n) {
    if (n < 100000) {
        if ((n / 10000 == n % 10)&&((n/1000)%10 == (n%100)/10)) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if (n / 1000 == (n%1000)/100 + ((n/10)%10)*10 + (n%10)*100) {
            return 1;
        } else {
            return 0;
        }
    }
}
int main()
{
    int max = 0;
    int i, j;
    for (i = 101; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            if (palindrom(i*j) == 1 && i * j > max) {
                max = i * j;
            }
        }
    }
    printf("%d", max);


    return 0;
}
