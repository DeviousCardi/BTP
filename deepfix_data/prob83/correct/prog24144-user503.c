#include <stdio.h>
int main() {
    int n,last,j;
    scanf("%d\n",&n);
    int a[n],i;
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("\n");
    int d;
    scanf("%d",&d);
    for (j=0;j<d;j++) {
        last=a[n-1];
        for (i=n-1;i>0;i--) {
            a[i]=a[i-1]; }
        a[0]=last; }
    return 0; }