#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ( (a*a+b*b)<(c*c) ){
	    printf("Obtuse Tringle"); }
	else  { if (a+b<=c){printf("Cannot form a Tringle");}
	else {printf("Not Obtuse Tringle");} }
	return 0; }