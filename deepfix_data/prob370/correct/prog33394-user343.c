#include<stdio.h>
int main() {
   int a,b,c,x,y,z;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if (a>b && a>c){
     x=a;y=b;z=c; }
   else if (b>a && b>c){
     x=b;y=a;z=c; }
   else {
      x=c;y=a;z=b; }
   if (x>=y+z)
       printf("INVALID");
   else if (x*x<y*y+z*z)
       printf("ACUTE");
   else if (x*x==y*y+z*z)
       printf("RIGHT");
   else if (x*x>y*y+z*z)
       printf("OBTUSE");
    return 0; }