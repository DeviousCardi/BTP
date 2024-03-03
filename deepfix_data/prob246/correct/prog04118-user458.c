#include <stdio.h>
int main() {
  int a=3 ,b=4 ,c=5;
   int s= a+b+c;
   int p=a*b*c;
   float A=(int)(a+b+c)/3;
   scanf("%d%d%d",&a,&b,&c);
   printf("%d\n%d\n%.3f",s,p,A);
	return 0; }