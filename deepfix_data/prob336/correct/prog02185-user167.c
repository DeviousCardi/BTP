#include <stdio.h>
#include <stdlib.h>
int main() {
	float a; float b; float c;
	scanf("%f%f%f",&a,&b,&c);
	if (a*a+b*b>c*c){printf("acute traingle");}
	else if (a*a+b*b<c*c){printf("not acute traingle");}
	else { printf("cannot form a traingle");}
	return 0; }