#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;int b;int c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b) <= c)
	    printf("Cannot form a Triangle");
	 if ((a*a+b*b) >= (c*c)) {
	    printf("Not Obtuse Triangle"); }
	  else {
	    printf("Obtuse Triangle"); }
	return 0; }