#include <stdio.h>
int main() {
    int n, i, j, k, s, count=0;
    scanf ("%d\n", &n);
    char arr[2*n-1];
    for (i=0; i<2*n-1; i++) {
        scanf ("%c", &arr[i]); }
    for (j=0; j<2*n-1; j+=2) {
        for (k=0; k<2*n-1; k+=2) {
            if (arr[j]==arr[k])
            count++; }
        if (count==2*j-1) {
            s=1;
            continue; }
        else {
            s=0;
            printf("No");
            break; } }
    if (s==1)
    printf("Yes");
    return 0; }