#include <stdio.h>
#include <stdlib.h>
int f1[1001];
int f2[1001];
int f3[1001];
void add() {
    int i, t = 0;
    for (i = 0; i < 1001; i++) {
        f1[i] = f2[i] + f3[i] + t;
        t = f1[i] / 10;
        f1[i] %= 10;
    }
}
int main()
{
    f3[0] = 1;
    f2[0] = 1;
    f1[0] = 2;
    int i = 3, k;
    while (f1[999] == 0) {
        for (k = 0; k < 1001; k++) {
            f3[k] = f2[k];
            f2[k] = f1[k];
        }
        add();
        i++;
    }
    printf("%d", i);
    return 0;
}
