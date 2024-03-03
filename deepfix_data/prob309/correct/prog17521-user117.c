#include <stdio.h>
int main() {
    int n, i, j, k, s, count=0;
    scanf ("%d", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &arr[i]); }
    for (j=0; j<n; j++) {
        for (k=0; k<n; k++) {
            if (arr[j]==arr[k])
            count++; }
        if (count==j+1) {
            s=1;
            continue; }
        else {
            s=0;
            printf("No");
            break; } }
    if (s==1)
    printf("Yes");
    return 0; }