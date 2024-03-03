#include <stdio.h>
#include <stdlib.h>
int main () {
  int b,h,i,j,c,start,end;
  scanf("%d",&h);
  scanf("%d",&b);
  for(i=1;i<=h;i++) {
    for(j=1;j<=b;j++) {
       start=h-i;
       end=b+i-h;
       if ((j>start)&&(j<=end)) {
       c=j+(2*i)-h;
       c=c-1;
       c=c%10;
       printf("%d",c); }
      else {
        printf(" ") ; } }
    printf("\n"); }
    return 0; }