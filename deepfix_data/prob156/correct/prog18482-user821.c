#include <stdio.h>
int main() {
    int n,m,i,j;
    int sum=0;
    int max=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     for(i=0;i<m;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
     for(j=0;j<m;j++) {
      sum=sum+a[j]; }
    if(max<sum)
     max=sum; }
    printf("%d",max);
   return 0; }