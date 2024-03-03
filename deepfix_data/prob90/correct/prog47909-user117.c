#include <stdio.h>
int main() {
    int n, k, i, j, l;
    scanf ("%d\n%d", &k, &n);
    int number[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &number[i]); }
    for (j=0; j<n; j++) {
        for (l=0; l<n; l++) {
            if ((number[j]+number[l])==k) {
                printf ("lucky");
                break; }
            else continue; } }
    return 0; }