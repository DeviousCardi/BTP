#include <stdio.h>
int main(){
   int a1,b1;
   int a2,b2;
   float d;
   scanf("%d %d",&a1,&b1);
   scanf("%d %d",&a2,&b2);
   if((b2-b1)*(a2-a1)>0)
   d=(float)(b2-b1)/(a2-(-a1));
   else
   d=(float)(b1-b2)/(a2-a1);
   printf("%.2f",d);
   return 0; }