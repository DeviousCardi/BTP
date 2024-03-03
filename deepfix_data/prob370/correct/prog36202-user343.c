#include<stdio.h>
int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if (c==a+b)
       printf("INVALID");
   else if (c*c>a*a+b*b)
       printf("ACUTE");
   else if (c*c==a*a+b*b)
       printf("RIGHT");
   else if (c*c<a*a+b*b)
       printf("OBTUSE");
    return 0; }