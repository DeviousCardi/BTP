#include <stdio.h>
#include <stdlib.h>
int main() {
 int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b>=c&&b+c>=a&&c+a>=b) {
       if(a>b&&a>c) {
         d=a*a;
         if(d>(b*b)+(c*c))
          printf("Obtuse Triangle");
         else
          printf("Not Obtuse Triangle"); }
       else if(b>a&&b>c) {
        d=b*b;
         if(d>(a*a)+(c*c))
          printf("Obtuse Triangle");
         else
          printf("Not Obtuse Triangle"); }
       if(c>b&&c>a) {
         d=c*c;
         if(d>(b*b)+(a*a))
          printf("Obtuse Triangle");
         else
          printf("Not Obtuse Triangle"); } }
    else
     printf("Cannot form a triangle");
	return 0; }