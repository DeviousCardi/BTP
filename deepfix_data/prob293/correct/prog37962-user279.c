#include <stdio.h>
#include <stdlib.h>
int main() {
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   int temp;
   if(a>b) {
       temp=a;a=b;b=temp; }
   if(b>c) {
   temp=b;b=c;c=temp;
   }if(a+b>c) {
   if((a*a+b*b)<c*c)
   printf("Obtuse Triangle");
   else
      printf("Not Obtuse Triangle"); }
   else
      printf("Cannot form a Triangle");
	return 0; }