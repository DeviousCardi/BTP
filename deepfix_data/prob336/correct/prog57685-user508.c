#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b&&a<=c&&b<=c)&&(a*a<=b*b+c*c)&&!((a>=b+c)||(c>=a+b)||(b>=a+c))) printf("Acute Triangle");
	if((a<=b&&a<=c&&b<=c)&&!(a*a<=b*b+c*c)) printf("Not Acute Triangle");
	if((b<=a&&c<=a&&c<=b)&&(c*c<=b*b+a*a)&&!((a>=b+c)||(c>=a+b)||(b>=a+c))) printf("Acute Triangle");
	if((b<=a&&c<=a&&c<=b)&&(c*c<=b*b+a*a)&&!((a>=b+c)||(c>=a+b)||(b>=a+c))) printf("Acute Triangle");
    if((a>=b+c)||(c>=a+b)||(b>=a+c)) printf("Cannot form a Triangle");
	return 0; }