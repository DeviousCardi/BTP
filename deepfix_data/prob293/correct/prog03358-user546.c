#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b<c)||(b+c<a)||(a+c<b))
	  printf("cannot form a triangle");
	if((a*a)+(b*b)<(c*c)) {
	    printf("Obtuse Triangle"); }
	else {
	    printf("Not Obtuse Triangle"); }
	return 0; }