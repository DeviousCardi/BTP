#include <stdio.h>
#include <stdlib.h>
int main () {
  int b,h,i,j,c,start,end;
  scanf("%d",&h);
  scanf("%d",&b);
  for(i=1;i<=h;i++) {
    printf("\n");
    for(j=1;j<=b;j++) {
       start=(h-i)/2;
       end=((2*b)-h+i)/2;
       if ((j>start)&&(j<end)) {
       c=(2*j-h+1)/2;
       c=c%10;
       printf("%d",c); }
      else {
        printf(" ") ; } } }
    return 0; }