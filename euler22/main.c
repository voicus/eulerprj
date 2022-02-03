#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char v[6000][20];
char s[20];
int score(int n) {
    int i;
    int sum = 0;
    for (i = 0; i < strlen(v[n]); i++) {
        sum += v[n][i] - 'A' + 1;
    }
    return sum;
}
int main()
{
    int i, n = 1;
    FILE*in = fopen("euler.in", "r");
    char c = ',';
    while (c == ',') {
        i = 0;
        fscanf(in, "%c", &c);
        while (c <= 'Z' && c >= 'A') {
            v[n][i] = c;
            i++;
            fscanf(in, "%c", &c);
        }
        n++;
    }
    int j;
    for (i = 1; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(v[i], v[j]) > 0) {
                strcpy(s, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], s);
            }
        }
    }
    long long int sum = 0;
    for (i = 1; i < n; i++) {
        sum += i*score(i);
    }
    printf("%lld", sum);

    return 0;
}
