#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a,&b,&c);
	if ((a*a+b*b)>(c*c)) {
	printf("ACUTE TRIANGLE");}
	else if((a*a+b*b)<(c*c))
	{ printf("Not Acute Triangle");}
	else if((a+b)<c)||((a+c)<b)||((b+c)<a)
	{ printf("Cannot Form a Triangle");}
	return 0; }