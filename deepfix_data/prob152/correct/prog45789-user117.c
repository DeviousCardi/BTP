#include <stdio.h>
int f(int a[],int start,int end, int n) {
    if(start==n-1)
    return a[n-1];
    else return(a[start]+f(a, start+1, end, n)); }
int main() {
    int i, j, n;
    scanf("%d\n", &n);
    int a[n], b[n-1], c[n-1];
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(i=0, j=0; i<n-1; i++, j++) {
        b[i]=f(a, i, j, n);
        c[i]=f(a, j+1, n-1, n); }
    for(i=0; i<n-1; i++)
    printf("%d ", b[i]);
    printf("\n");
    for(i=0; i<n-1; i++)
    printf("%d ", c[i]);
    return 0; }