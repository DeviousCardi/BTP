#include<stdio.h>
int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if (c*c>a*a+b*b)
       printf("ACUTE");
   else if (c*c==a*a+b*b)
       printf("RIGHT");
   else if (c*c<a*a+b*b)
       printf("OBTUSE");
   else if (c==a+b)
       printf("INVALID");
    return 0; }