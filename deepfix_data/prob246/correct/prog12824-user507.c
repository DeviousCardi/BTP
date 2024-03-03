#include <stdio.h>
int main() {
	int a,b,c,sum,prd ;
	float avg ;
	printf ("enter values of a,b,c ") ;
	scanf ("%d,%d,%d",&a,&b,&c) ;
	sum=a+b+c ;
	prd = a*b*c ;
	avg= sum/3 ;
	printf ("%d\n%d\n%.3f\n",sum,prd,avg ) ;
	return 0; }