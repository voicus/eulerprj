#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r;
    int v;
    int s = 200;
    for (r = 1; r < 100; r++) {
        v = 1;
        for (n = r+1; n <= 100; n++) {
            v *= n;
            v /= n-r;
            if (v >= 1000000) {
                break;
            } else {
                s++;
            }
        }
    }
    printf("%d", 5150-s);


    return 0;
}
