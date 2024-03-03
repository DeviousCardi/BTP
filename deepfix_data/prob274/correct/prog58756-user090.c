#include <stdio.h>
int main(){
  int n,i,j,a[100],t=0 ;
  scanf("%d",&n);
  for(i=1;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n-1;i++) {
      for(j=i+1;j<n;j++) {
         if(a[i]!=a[j])
         t=t+1 ; }
      printf("%d",t);break; }
    return 0; }