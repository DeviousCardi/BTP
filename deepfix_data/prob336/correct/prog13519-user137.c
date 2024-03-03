#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf ("%d %d %d", &a, &b, &c);
	 if (a>=b+c || b>=a+c || c>=b+a) {
	     printf ("Cannot form a Triangle"); }
	 else if (c*c<=b*b+a*a || b*b+c*c>=a*a || b*b<=a*a+c*c ) {
	    printf ("Acute Triangle"); }
	 else {
	     printf ("Not Acute Triangle"); }
	return 0; }