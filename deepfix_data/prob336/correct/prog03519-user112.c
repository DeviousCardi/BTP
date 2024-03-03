#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a*a<b*b+c*c)||(b*b<a*a+c*c)||(c*c<a*a+b*b))
	  printf("Acute Triangle");
	if((a>=b&&a>=c&&a<b+c&&a*a>=b*b+c*c)||(b>a&&b>=c&&b<a+c&&b*b>=a*a+c*c)||(c>a&&c>b&&c<a+b&&c*c>=a*a+b*b))
	    printf("Not Acute Triangle");
	if((a>=b+c)||(b>=a+c)||(c>=a+b))
	printf("Cannot form a Triangle");
	return 0; }