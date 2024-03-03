#include <stdio.h>
int main() {
	int a, b, c;
	float d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d\n", a+b+c);
	printf("%d\n", a*b*c);
	d=((float)a+(float)b+(float)c)/3;
	printf("%.3f\n", d);
	return 0; }