#include <stdio.h>
int main() {
    int n,i,j,d[10000],r,b=1,count=0;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=0;j>0;j++) {
        for (i=0;i<j;i++) {
            r=a[b];
            b=r;
            count=count + 1;
            d[i]=r;
            if (d[i]==d[j])
            break; } }
    printf ("%d %d",i,i-j);
    return 0; }