#include <stdio.h>
int main(){
  int n,i,j,count=0;
  int list[n];
  scanf("%d",&n);
  for(i=0;i<=n;i++) {
     scanf("%d",&list[i]); }
  for(j=1;j<=n;j++) {
    if(list[j-1]>list[j]&&list[j]>list[j+1])
    count++; }
printf("%d",count);
    return 0; }