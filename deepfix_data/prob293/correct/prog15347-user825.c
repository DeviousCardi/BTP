#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   if (!(a+b>c)||!(b+c>a)||!(c+a>b))
   printf("Cannot form a Triangle");
  else if ((a*a+b*b)<c*c)
    printf("Obtuse Triangle");
    else
    printf("Not Obtuse Triangle");
return 0; }