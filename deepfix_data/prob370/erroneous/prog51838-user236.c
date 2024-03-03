#include<stdio.h>
int main()
{ int a;
int b;
int c;
scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 if (a+b<=c||a>=b+c||a+c<=b)
 {printf("INVALID"); }
 else if (a*a+b*b==c*c||a*a==b*b+c*c||a*a+c*c==b*b)
 {printf("RIGHT"); }
 else if (a*a+b*b<c*c||a*a>b*b+c*c||a*a+c*c<b*b)
 {printf("OBTUSE"); }
 else if (a*a+b*b>c*c||a*a<b*b+c*c||a*a+c*c>b*b)
 {printf("ACUTE"); } }
 return 0; }