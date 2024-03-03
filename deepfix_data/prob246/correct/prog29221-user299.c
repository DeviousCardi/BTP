#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	int s;
	int p;
	float A;
	s=(a+b+c);
	p=a*b*c;
	A=(a+b+c)/3;
	printf ("%d\n%d\n%.3f",s,p,A);
	return 0; }