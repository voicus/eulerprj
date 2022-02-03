#include <stdio.h>
#include <stdlib.h>
int st[10], viz[10];
int d[7] = {2, 3, 5, 7, 11, 13, 17};
long long int s;
void bkt(int k) {
    if (k == 10) {
        int i;
        long long int n;
        n = 0;
        for (i = 0; i < 10; i++) {
            n *= 10;
            n += st[i];
        }
        s += n;
    } else {
        int i;
        if (k <= 2) {
           for (i = 0; i < 9; i++) {
                if (k == 0 && i == 0) {
                    continue;
                }
                if (viz[i] == 0) {
                    viz[i] = 1;
                    st[k] = i;
                    bkt(k+1);
                    viz[i] = 0;
                }
            }
        } else {
            for (i = 0; i <= 9; i++) {
                if (viz[i] == 0 && (st[k-2]*100 + st[k-1]*10 + i) % d[k-3] == 0) {
                    viz[i] = 1;
                    st[k] = i;
                    bkt(k+1);
                    viz[i] = 0;
                }
            }
        }
    }
}


int main()
{
    bkt(0);
    printf("%I64d", s);


    return 0;
}
