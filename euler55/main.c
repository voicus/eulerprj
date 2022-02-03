#include <stdio.h>
#include <stdlib.h>
int v[1000];
int c[1000];
int s;
void add() {
    int i, j;
    for (i = 0; i < s; i++) {
        c[i] = v[s-i-1];
    }
    i = 0;
    while (i < s) {
        v[i] += c[i];
        v[i+1] += v[i]/10;
        v[i] %= 10;
        i++;
    }
    while (v[s] > 0) {
        v[s+1] = v[s]/10;
        v[s] %= 10;
        s++;
    }
}
int isPal(long long int n) {
    int i, j;
    i = 0;
    j = s-1;
    while (i < j) {
        if (v[i] != v[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int lychrel(long long int n) {
    int i;
    s = 0;
    while (n > 0) {
        v[s] = n%10;
        n /= 10;
        s++;
    }
    for (i = 0; i < 50; i++) {
        add();
        if (isPal(n) == 1) {
          return 0;
        }
    }
    return 1;
}
int main()
{
    long long int i, j;
    int sol = 0;
    for (i = 1; i < 10000; i++) {
        for (j = 0; j < 1000; j++) {
            c[j] = 0;
            v[j] = 0;
        }
        if (lychrel(i) == 1) {
            sol++;
        }
    }
    lychrel(89);
    printf("%d", sol);


    return 0;
}
