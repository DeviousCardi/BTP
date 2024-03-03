#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	float a;
	float b;
	float c;
	a=(0.1)*(ti-200000);
	b=(30000)+(0.2)*(ti-500000);
	c=(130000)+(0.3)*(ti-1000000);
	if
	(ti<=200000) {
	    printf("0"); }
	else if
	((ti>200000)&&(ti<=500000)) {
	    printf("%.2f",a); }
	else if
	((ti>500000)&&(ti<=1000000)) {
	    printf("%.2f",b); }
	else if
	(ti>1000000) {
	    printf("%.2f",c); }
	return 0; }