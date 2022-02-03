#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1;
    int p = 10;
    int c = 1;
    int s = 0;
    int x = 10;
    int sol = 1;
    int cs, cn;
    while (s <= 1000000) {
        if (n == p) {
            p *= 10;
            c++;
        }
        s += c;
        if (s >= x) {
            cs = x;
            cn = n;
            while (s > x) {
                cn /= 10;
                x++;
            }
            sol *= (cn%10);
            x = cs*10;
        }
        n++;
    }
    printf("%d", sol);


    return 0;
}
