#include <stdio.h>
#include <stdlib.h>
int main() {
int a;int b;int c;
scanf("%d%d%d",&a,&b,&c);
if ((a*a+b*b)<(c*c))
printf("\n Obtuse triangle");
else
printf("Not Obtuse Triangle");
if((a+b)>(c));
printf("\n cannot form a triangle");
  return 0; }