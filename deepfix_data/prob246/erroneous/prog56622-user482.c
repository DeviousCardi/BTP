#include <stdio.h>
int main() {
 int a;
 int b;
 int c;
 scanf("%d%d%d",&a,&b,&c);
 int sum=a+b+c;
 int product=a*b*c;
 float average=((float (a+b+c))/3);
 printf("%d\n",sum);
 printf("%d\n",product);
 printf("%.3f",average);
	return 0; }