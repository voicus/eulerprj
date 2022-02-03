#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    for (a = 1; a <= 333; a++) {
        for (b = a; a + 2*b < 1000; b++) {
            if (a * a + b * b == (1000-a-b)*(1000-a-b)) {
                printf("%d", a*b*(1000-a-b));
            }
        }
    }




    return 0;
}
