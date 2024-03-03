#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;int b;int c;
	scanf("%d%d%d",&a,&b,&c);
	     a = 8;
	     b = 6;
	     c = 11;
	if ((a*a+b*b) > (c*c)) {
	    printf("Not Obtuse Triangle\n"); }
	  else {
	    printf("Obtuse Triangle\n"); }
	if ((a*a+b*b) < (c*c)) {
	    printf("Cannot form a Triangle"); }
	return 0; }