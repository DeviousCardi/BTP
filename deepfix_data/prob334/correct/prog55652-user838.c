#include <stdio.h>
#include <stdlib.h>
int main () {
  int b,h,i,j,c;
  scanf("%d",&b);
  scanf("%d",&h);
  for(i=1;i<=h;i++) {
    printf("\n");
    for(j=1;j<=b;j++) {
      if ((j>=(((b-h-1)/2)+i))&&(j<=((2*i)+h+1))) {
        c=(j+2-b-i)%10;
        printf("%d",c); } } }
    return 0; }