#include <stdio.h>
int main() {
    int n, i, j, k, l, count=0, missn, repn;
    scanf ("%d", &n);
    int arr[n];
    for(i=0; i<n; i++) {
        scanf ("%d", &arr[i]); }
    for (i=0; i<n; i++) {
        count=0;
        for (j=0; j<n; j++) {
            if (arr[i]==arr[k])
            count++; }
        if(count>1) {
            repn=arr[i];
            printf("%d", repn);
            break; } }
    printf("\n");
    for (k=0; k<n; k++) {
        for (l=0; l<n; l++) {
            if (arr[k]==l)
            continue;
            else {
                printf ("%d", l);
                break; } } }
    return 0; }