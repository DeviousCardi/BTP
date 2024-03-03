#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf ("%d %d %d", &a, &b, &c);
	if (a*a<b*b+c*c || b*b<c*c+a*a || c*c<b*b+a*a) {
	    printf ("Acute Triangle"); }
	 else if (a<b+c || b<a+c || c<b+a) {
	     printf ("Cannot form a Triangle"); }
	 else {
	     printf ("Not Acute Triangle"); }
	return 0; }