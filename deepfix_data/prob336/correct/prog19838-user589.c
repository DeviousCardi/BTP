#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a+b) > c && (b+c) > a && (c+a) > b) {
	       if ((a*a + b*b) > (c*c))
	       printf("Acute Triangle");
	       else
	       printf("Not Actue Triangle"); }
	 else
	 printf("Cannot form a triangle");
	return 0; }