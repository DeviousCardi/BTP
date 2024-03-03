#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b&&a<=c&&b<=c)&&(a*a<=b*b+c*c)) printf("acute");
	if((b<=a&&c<=a&&c<=b)&&(c*c<=b*b+a*a)) printf("acute");
    if((a>=b+c)||(c>=a+b)||(b>=a+c)) printf("Cannot form a triangle");
	return 0; }