#include <stdio.h>
int main() {
    int n,i,j,d[10000],r,b=0,count=0;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i>=0;i++) {
       for (j=0;j<i;j++) {
           r=a[b];
           b=r;
           count=count + 1;
           d[j]=r;
           if (d[i]==d[j])
           break; } }
    printf ("%d %d",i,i-j);
    return 0; }