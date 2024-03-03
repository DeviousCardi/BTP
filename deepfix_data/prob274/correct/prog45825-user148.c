#include <stdio.h>
int main() {
    int n,i,l,k=0;
    scanf ("%d",&n);
    int r[n];
    int j[n];
    int a[2*n];
    int b[2*n];
    for (i=0;i<n;i++)
        scanf ("%d",&r[i]);
    for (i=0;i<n;i++)
        j[i]=i+1;
    for (i=0;i<2*n;i=i+2) {
        a[i]=j[k];
        a[i+1]=r[k];
        k++; }
    b[0]=a[0];
    for (i=1,l=1;i<2*n;i++) {
        if (a[l]==a[l-1])
            l++;
        else {
            b[i+1]=a[l];
            l++; } }
    for (i=0;i<2*n;i++)
    printf ("%d",b[i]);
    return 0; }