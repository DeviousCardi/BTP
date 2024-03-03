#include <stdio.h>
#include <stdlib.h>
int main () {
  int b,h,i,j,t;
  scanf("%d%d",&h,&b);
  for(i=1;i<=h;i++) {
    printf("\n");
    for(j=1;j<=b;j++) {
      if((j>=(b-1+i))&&(j<=(2*b+3*i))) {
        t=j+2-b-i;
        printf("%d",t); } } }
    return 0; }