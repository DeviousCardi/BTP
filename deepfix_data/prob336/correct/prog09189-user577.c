#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d;
	if ( a+b>c && a+c>b && b+c>a) {
    if (a*a+b*b>c*c && a*a+c*c>b*b && b*b+c*c>a*a)
	printf("Acute Triangle");
	else printf("Not Acute Triangle"); }
	else printf("Cannot form a Triangle");
	return 0; }