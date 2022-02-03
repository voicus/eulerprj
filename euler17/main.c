#include <stdio.h>
#include <stdlib.h>
int p[1001];
int main()
{
    p[1] = 3;
    p[2] = 3;
    p[3] = 5;
    p[4] = 4;
    p[5] = 4;
    p[6] = 3;
    p[7] = 5;
    p[8] = 5;
    p[9] = 4;
    p[10] = 3;
    p[11] = 6;
    p[12] = 6;
    p[13] = 8;
    p[14] = 8;
    p[15] = 7;
    p[16] = 7;
    p[17] = 9;
    p[18] = 8;
    p[19] = 8;
    int s = 0, n;
    for (n = 0; n < 20; n++) {
        s += p[n];
    }
    p[20] = 6;
    p[30] = 6;
    p[40] = 5;
    p[50] = 5;
    p[60] = 5;
    p[70] = 7;
    p[80] = 6;
    p[90] = 6;
    for (n = 20; n < 100; n++) {
        if (n % 10 == 0) {
            s += p[n];
            continue;
        } else {
            p[n] = p[10*(n/10)] + p[n%10];
            s += p[n];
        }
    }
    p[0] = 0;
    // hundreds are (one/two/... (p[first digit])) + "hundred"(7 letters) + and(3) + p[n%100], without the and when it's divisible by 100.
    for (n = 100; n < 1000; n++) {
        p[n] = p[n/100] + 10 + p[n%100];
        if (n % 100 == 0) {
            p[n] -= 3;
        }
        s += p[n];
    }
    p[1000] = 11;
    s += 11;
    printf("%d", s);
    return 0;
}
