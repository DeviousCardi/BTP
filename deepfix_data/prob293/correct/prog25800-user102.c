#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a+b<=c && a+c<=b && b+c<=a)
printf("Cannot form a Triangle");
else if((a*a+b*b-c*c<0) && (a*a+c*c-b*b<0) && (b*b+c*c-a*a<0))
printf("Obtuse Triangle");
else
printf("Not Obtuse Triangle");
return 0; }