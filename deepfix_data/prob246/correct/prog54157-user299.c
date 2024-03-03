#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	int s=0;
	int p=0;
	float A=0;
	s=(a+b+c);
	p=a*b*c;
	A=(a+b+c)/3;
	printf ("%d%d%.3f",s,p,A);
	return 0; }