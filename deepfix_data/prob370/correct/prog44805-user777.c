#include<stdio.h>
int main() {
int a;int b;int c;
scanf("%d%d%d",&a,&b,&c);
if(a+b<c)
printf("INVALID");
if(a*a+b*b<c*c)
          printf("ACUTE");
         if(a*a+b*b==c*c)
    printf("RIGHT");
     if(a*a+b*b>c*c)
         printf("OBTUSE");
return 0; }