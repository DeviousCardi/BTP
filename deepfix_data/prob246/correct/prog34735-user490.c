#include <stdio.h>
int main() {
	int a=0, b=0, c=0, s, p;
		scanf("%d %d %d", &a, &b, &c);
	s = a+b+c;
	p = a*b*c;
	float A;
	A = (a+b+c)/3;
	printf("%d\n %d\n", s, p);
	printf("%f", A);
	return 0; }