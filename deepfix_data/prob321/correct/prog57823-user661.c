#include <stdio.h>
int main(){
   int a1,b1;
   int a2,b2;
   float d;
   scanf("%d %d",&a1,&b1);
   scanf("%d %d",&a2,&b2);
   if(a1==a2)
   {printf("inf",&d);}
   else
   {d=(float)(b2-b1)/(a2-(a1));}
   {printf("%.2f",d);}
   return 0; }