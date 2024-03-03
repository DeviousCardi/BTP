#include <stdio.h>
int main() {
	int a=0, b=0, c=0, s, p;
	s = a+b+c;
	p = a*b*c;
	float A;
	A = (a+b+c)/3;
	scanf("%d %d %d", a, b, c);
	printf("%d\n %d\n %f\n", s, p, &A);
	return 0; }