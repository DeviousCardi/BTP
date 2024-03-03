#include <stdio.h>
int main() {
    int n,i,k;
    scanf ("%d",&n);
    int r[n];
    int j[n];
    int a[2*n];
    for (i=0;i<n;i++)
        scanf ("%d",&r[i]);
    for (i=0;i<n;i++)
        j[i]=i+1;
    for (i=0;k=0;i<2*n;i=i+2,k++) {
        a[i]=j[k];
        a[i+1]=r[k]; }
    for (i=0;i<2*n;i++)
    printf ("%d ", a[i]);
    return 0; }