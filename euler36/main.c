#include <stdio.h>
#include <stdlib.h>
int v2[1000];
FILE*out;
int base2(int n) {
    int p = 2;
    int i = 0;
    fprintf(out, "%d = ", n);
    while (n > 0) {
        if (n == p) {
            v2[i+1] = 1;
            n = 0;
            i++;
        } else {
            if (n%p != 0) {
                v2[i] = 1;
                n -= n%p;
            }
        }
        p *= 2;
        i++;
    }
    i--;
    int j;
    for (j = i; j >= 0; j--) {
        fprintf(out, "%d", v2[j]);
    }
    fprintf(out, "\n");
    j = 0;
    while (j < i) {
        if (v2[i] != v2[j]) {
            for (i = 0; i < 100; i++) {
                v2[i] = 0;
            }
            return 0;
        }
        i--;
        j++;
    }
    for (i = 0; i < 100; i++) {
        v2[i] = 0;
    }
    return 1;
}
int v[30];
int palindrom(long long int n) {
    int i = 0;
    while (n > 0) {
        v[i] = n%10;
        n /= 10;
        i++;
    }
    int j = i-1;
    i = 0;
    while (i < j) {
        if (v[i] != v[j]) {
            return 0;
        }
        v[i] = 0;
        v[j] = 0;
        i++;
        j--;
    }
    return 1;
}
int main()
{
    int n;
    int sum = 1;
    out = fopen("euler.out", "w");
    for (n = 2; n < 1000000; n++) {
        if ((palindrom(n) == 1) && (base2(n) == 1)) {
            sum += n;
        }
    }
    printf("%d", sum);


    return 0;
}
