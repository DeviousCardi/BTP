#include <stdio.h>
int main() {
    int n, i, j, flag=0;
    scanf ("%d", &n);
    char str[2*n-1];
    for (j = 0; j <= n; j++) {
        int count=0;
        for (i = 0; i < ( 2*n); i+=2) {
            if (str[i] == j) {
                count = count + 1; } }
        a[j]=count; }
    return 0; }