#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti;
	float a;
	scanf("%d",&ti);
	if (ti<200000); {
	    a=0;
	    printf("%.2f",a); }
	if (ti>=200001 && ti<=500000); {
	    a=(ti-200000)*0.1;
	    printf("%.2f",a); }
	if (ti>=500001 && ti <=1000000); {
	    a=30000+(.2*(ti-500000));
	    printf("%.2f",a); }
	if (ti>=1000000); {
	    a=130000+(.3*(ti-1000000));
	    printf("%.2f",a); }
	return 0; }