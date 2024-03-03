#include <stdio.h>
#include <stdlib.h>
int main() {
    int m,n,i,j,max,x;
    scanf("%d",&m);
    scanf("%d",&n);
    if (n>m)
    max=n+1;
    else
    max=m+1;
    int a[max];
    int b[max];
    for (i=0;i<max;i=i+1) {
            a[i]=0;
            b[i]=0; }
    for(i=m-1;i>=0;i=i-1) {
            scanf("%d",&a[i]); }
    for(j=n-1;j>=0;j=j-1) {
            scanf("%d",&b[j]); }
    int c[max];
    for (i=0;i<max;i=i+1) {
            c[i]=0; }
    for (i=0;i<max;i=i+1) {
         x=(a[i]+b[i]+c[i]);
          c[i]=x%10;
          if (x/10==0)
          c[i+1]=1; }
     for (i=max-1;i>=0;i=i-1) {
             printf("%d",c[i]); }
    return 0; }