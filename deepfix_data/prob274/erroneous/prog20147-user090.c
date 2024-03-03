#include <stdio.h>
int main(){
  int n,i,a[100] ;
  scanf("%d",&n);
  for(i=1;i<n,i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n-1;i++) {
      for(j=i+1;j<n;j++) {
         if(a[i]!=a[j])
         t=t+1 ; }
      printf("%d",t); }
    return 0; }