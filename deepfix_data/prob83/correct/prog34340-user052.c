#include <stdio.h>
int main() {
  int n,d,i,x,arr[1000],temp;
  scanf("%d ",&n);
  for(i=0;i<=n;i++)
   scanf("%d",&arr[i]);
   scanf("%d",&d);
   temp=d%6;
   if(temp=0){
      for(i=0;i<n;i++)
   printf("%d",arr[i]);}
    return 0; }