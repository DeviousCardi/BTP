#include <stdio.h>
int main() {
  int n,m,max=-1;
 scanf("%d%d",&n,&m);
  int a[m*n],sum=0;
 for(i=0;i<n;i++) {
     for(j=0;j<m;j++) {
        scanf("%d",&a[i*m+j]);
        sum=sum+a[i*m+j]; }
    if(sum > max)
    max = sum;
    sum = 0; }
 printf("%d",max);
    return 0; }