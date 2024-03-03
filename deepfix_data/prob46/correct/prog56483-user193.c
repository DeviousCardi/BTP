#include <stdio.h>
int main(){
  int n,m;
  scanf("%d%d",&m,&n);
  int count=0;
  int i;
  for(i=2 ;i<=(n-1) ;i++) {
  if(n%i!=0) {
      continue; }
  count=count+1; }
  if(count==m){
      printf("YES"); }
  else {
      printf("NO"); }
      return 0; }