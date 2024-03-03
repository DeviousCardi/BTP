#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;int b;int c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a+b*b) >= (c*c)) {
    	if ((a+b) < c) {
	       printf("Cannot form a Triangle");
	    printf("Not Obtuse Triangle"); } }
	  else {
	    printf("Obtuse Triangle"); }
	return 0; }