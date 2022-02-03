#include <stdio.h>
#include <stdlib.h>
int f[10];
int main()
{
    int p, i, c, j, ok;
    long long int n, m = 0, cn;
    for (i = 9; i < 10000; i++) {
        c = 0;
        j = 1;
        n = 0;
        while (c < 9) {
            p = 1;
            while (p < i*j) {
                p*= 10;
                c++;
            }
            n*= p;
            n += i*j;
            j++;
        }
        if (c == 9) {
            cn = n;
            ok = 1;
            while (n > 0) {
                f[n%10]++;
                n /= 10;
            }
            for (n = 1; n <= 9; n++) {
                if (f[n] != 1) {
                    for (n = 1; n < 10; n++) {
                        f[n] = 0;
                    }
                    f[0] = 0;
                    ok = 0;
                    break;
                }
            }
            if (f[0] > 0) {
                for (n = 0; n < 10; n++) {
                    f[n] = 0;
                }
                continue;
            }
            if (cn > m && ok == 1) {
                m = cn;
            }
        }
    }
    printf("%lld", m);


    return 0;
}
