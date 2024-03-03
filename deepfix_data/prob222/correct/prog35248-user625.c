#include <stdio.h>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if (a<b&&b<c) {printf("%f",b);}
	else if (a<c&&c<b) {printf("%f",c);}
	else if (c<a&&a<b) {printf("%f",a);}
	return 0; }