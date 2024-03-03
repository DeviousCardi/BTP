#include <stdio.h>
int main() {
  int a ,b ,c;
  -10<=a<=15,-18<=b>=15,-5<=c>=10;
   int s= a+b+c;
   int p=a*b*c;
   float A=(int)(a+b+c)/3;
   scanf("%d%d%d",&a,&b,&c);
   printf("%d\n%d\n%.3f",s,p,A);
	return 0; }