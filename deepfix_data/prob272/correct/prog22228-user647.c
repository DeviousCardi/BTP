#include <stdio.h>
int main(){
  int n1,n2,n,i,term,x,y;
  scanf("%d %d %d",&n1,&n2,&n);
  x=n1;
  y=n2;
  for(i=3;i<=n;i++){
      term=x+y-2;
      x=y;
      y=term; }
    return 0; }