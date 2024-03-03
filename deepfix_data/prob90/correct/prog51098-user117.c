#include <stdio.h>
int main() {
    int n, i, j, k;
    scanf ("%d %d", &k, &n);
    int number[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &number[i]); }
    for (j=0; j<n; j++) {
        for (k=0; k<n; k++) {
            if (number[j]+number[k]==k)
            printf ("lucky");
            break; } }
    return 0; }