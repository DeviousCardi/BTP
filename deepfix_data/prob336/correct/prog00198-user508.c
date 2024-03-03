#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a*a<=b*b+c*c||b*b<=a*a+c*c||c*c<=b*b+a*a)&&!((a>=b+c)||(c>=a+b)||(b>=a+c))) printf("Acute Triangle");
    if((a>=b+c)||(c>=a+b)||(b>=a+c)) printf("Cannot form a Triangle");
	return 0; }