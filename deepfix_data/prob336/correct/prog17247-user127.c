#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a,&b,&c);
	if (((a*a+b*b)>(c*c)) || ((a*a+c*c)>(b*b))||((b*b+c*c)>(a*a)))
	printf("ACUTE TRIANGLE");
	else if((a*a+b*b)<(c*c) || ((a*a+c*c)<(b*b))||((b*b+c*c)<(a*a)))
	printf("Not Acute Triangle");
	else
	printf("Cannot Form a Triangle");
	return 0; }