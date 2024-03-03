#include <stdio.h>
int main() {
    int n, i, j, k, count=0, missn, repn;
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
    return 0; }