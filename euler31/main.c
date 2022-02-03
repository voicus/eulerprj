#include <stdio.h>
#include <stdlib.h>
int v[8] = {1, 2, 5, 10, 20, 50, 100, 200};
int nr;
void bkt(int k, int s) {
    if (s > 200) {
        return;
    }
    if (s == 200) {
        nr++;
        return;
    }
    int i;
    for (i = k; i < 8; i++) {
        bkt(i, s + v[i]);
    }
}
int main()
{
    nr = 0;
    bkt(0, 0);
    printf("%d", nr);


    return 0;
}
