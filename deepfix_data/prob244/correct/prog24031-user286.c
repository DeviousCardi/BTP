#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	scanf("%d",&ti);
	if (ti<=200000)
	    printf("%.2f",0.00);
	else if (ti>=200001 && ti<=500000) {
	    tax=((10.0/100)*(ti-200000));
	    printf("%.2f",tax); }
	return 0; }