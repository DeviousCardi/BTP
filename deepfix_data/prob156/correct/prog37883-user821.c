#include <stdio.h>
int main() {
    int n,m,i,j;
    int sum=0;
    int max=0;
    scanf("%d%d",&n,&m);
    int a[n];
    int b[m];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
     for(j=0;j<m;j++) {
      sum=sum+b[j]; }
    if(max<sum)
     max=sum; }
    printf("%d",max);
   return 0; }