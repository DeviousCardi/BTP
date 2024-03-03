#include <stdio.h>
#include <stdlib.h>
int main() {
	float a; float b; float c;
	scanf("%f%f%f",&a,&b,&c);
	if (a*a+b*b>c*c){printf("acute traingle");}
	else {printf("not acute traingle");}
	if (a>100) b>100 c>100){printf("cannot form a traingle");}
	return 0; }