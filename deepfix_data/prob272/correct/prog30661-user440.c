#include <stdio.h>
int main(){
 int a,b,n;
  int Tn,i=0;
  scanf("%d%d%d",&a,&b,&n);
  i=2;
  while(i<n) {
     Tn=b+a-2;
     a=b;
     b=Tn;
     i++; }
  printf("%d",Tn);
    return 0; }