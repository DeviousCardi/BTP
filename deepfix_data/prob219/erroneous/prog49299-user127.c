#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a,&b,&c);
	if (a>=b&&b>=c){ printf("result is %d", b); }
	else (a>=b&&c>=a) {printf("result is %d", a); }
	else (a>=c&&c>=b) {printf("result is %d", c); }
	return 0; }