#include <stdio.h>
int main() {
	int a ;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	int sum=a+b+c ;
	int product =a*b*c ;
	float average =((a+b+c))/3 ;
	printf("%d\n%d\n%.3f",sum,product,average);
	return 0; }