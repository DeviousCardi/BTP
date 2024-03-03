#include <stdio.h>
int main() {
	int a,b,c ;
	scanf("%d",&a) ;
 	scanf("%d",&b) ;
	scanf("%d",&c) ;
	d=a+b+c;
	e=a*b*c;
	f=(float)d/3;
	printf("%d \n",a+b+c);
	printf("%d \n",a*b*c);
	printf("%.3f",f);
	return 0; }