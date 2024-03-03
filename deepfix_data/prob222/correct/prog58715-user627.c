#include <stdio.h>
int main() {
	float am,bm,cm,ae,be,ce,a,b,c;
	scanf("%f%f%f",&am,&bm,&cm);
	scanf("%f%f%f",&ae,&be,&ce);
	a=am*40/50+ae*60/100;
	b=bm*40/50+be*60/100;
	c=cm*40/50+ce*60/100;
	if((a>=b&&a<=c)||(a<=b&&a>=c)) {
	    printf("%.2f",a); }
	else if((b>=a&&b<=c)||(b<=a&&b>=c)) {
	    printf("%.2f",b); }
	else {
	    printf("%.2f",c); }
	return 0; }