#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    a = 1;
    b = 1;
    c = 2;
    long long int s = 0;
    while (c < 4000000) {
        if (c % 2 == 0) {
            s += c;
        }
        a = b;
        b = c;
        c = a + b;
    }
    printf("%lld", s);



    return 0;
}
