#include <stdio.h>
#include <stdlib.h>
int c[1000001];
int v[1000001];
void eratostene() {
    int i, j;
    c[0] = 1;
    c[1] = 1;
    for (i = 2; i < 1001; i++) {
        if (c[i] == 0) {
            for (j = 2*i; j < 1000001; j += i) {
                c[j] = 1;
            }
        }
    }
}
int main()
{
    eratostene();
    int i, j;
    for (i = 1; i * i < 500000; i++) {
        for (j = 3; j + 2*i*i <= 1000000; j+= 2) {
            if (c[j] == 0) {
                v[j + 2*i*i] = 1;
            }
        }
    }
    for (i = 35; i < 1000001; i+= 2) {
        if (v[i] == 0 && c[i] == 1) {
            printf("%d", i);
            return 0;
        }
    }


    return 0;
}
