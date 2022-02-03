#include<stdio.h>
long long int w[101];
int main() {
    int n = 100;
    w[0] = 1;

    for (int i = 1; i <= 99; i++) {
        for (int j = i; j <= n; j++) {
            w[j] += w[j - i];
        }
    }
    printf("%I64d", w[100]);
    return 0;
}
