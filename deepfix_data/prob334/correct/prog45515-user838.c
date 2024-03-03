#include <stdio.h>
#include <stdlib.h>
int main () {
  int b,h,i,j,c,start,end;
  scanf("%d",&h);
  scanf("%d",&b);
  for(i=0;i<=h;i++) {
    printf("\n");
    for(j=1;j<=b;j++) {
       start=h-i+1;
       end=b+i-h;
       if ((j>start)&&(j<=end)) {
       c=j+(2*i)-h;
       c=c+1;
       c=c%10;
       printf("%d",c); }
      else {
        printf(" ") ; } } }
    return 0; }