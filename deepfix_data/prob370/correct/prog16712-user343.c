#include<stdio.h>
int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if (c==a+b || a==b+c || b==c+a)
       printf("INVALID");
   else if (c*c<a*a+b*b || a*a<b*b+c*c || b*b<c*c+a*a)
       printf("ACUTE");
   else if (c*c==a*a+b*b || a*a==b*b+c*c || b*b==c*c+a*a)
       printf("RIGHT");
   else if (c*c>a*a+b*b || a*a>b*b+c*c || b*b>c*c+a*a)
       printf("OBTUSE");
    return 0; }