#include<stdio.h>
int main() {
  int n;
 int diff;
 scanf("%d",&n);
    int array[n];
    int i,j;
    scanf("%d",&array[i]);
    for(i=0;i<=n;i++)
    for(j=1;j<=n-1;j++) {
       printf("%d",diff);
   diff=array[i]-array[i+j];
    i=i+1; }
   return 0; }