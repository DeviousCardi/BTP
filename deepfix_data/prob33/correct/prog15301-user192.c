#include <stdio.h>
int main()
{ int rowindex=0,a,b,healthcounter,n;
  scanf("%d",&healthcounter);
  scanf("%d",&n);
  scanf("%d",&b);
  while(rowindex<n) {
      scanf("%d",&a);
      if((a-b<0)) {
          healthcounter=healthcounter+a-b; }
      b=a;
      rowindex++; }
  if(healthcounter<=0) {
      printf("No"); }
  else {
      printf("Yes"); }
    return 0; }