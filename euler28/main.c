#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, i;
    s = 1;
    for (i = 3; i <= 1001; i+= 2) {
        s += 4*(i*i - (i-1) - (i-1)/2);
    }
    printf("%d", s);

    return 0;
}
