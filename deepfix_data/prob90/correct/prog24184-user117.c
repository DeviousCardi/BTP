#include <stdio.h>
int main() {
    int n, k, i, j, l;
    scanf ("%d\n%d", &k, &n);
    int number[1000];
    for (i=0; i<n; i++) {
        scanf ("%d", &number[i]); }
    for (j=0; j<n; j++) {
        for (l=0; l<n; l++) {
            if ((number[j]+number[l])==k) {
                printf ("lucky");
                break; }
            else if (l=n-1)
            printf ("unlucky"); } }
    return 0; }