#include <stdio.h>
#include <stdlib.h>
int main() {
int a;int b;int c;
scanf("%d%d%d",&a,&b,&c);
if((a+b)<=(c))
printf("\n Cannot form a Triangle");
else if((a*a)+(b*b)<(c*c))
printf("\n Obtuse Triangle");
else
printf("Not Obtuse Triangle");
   return 0; }