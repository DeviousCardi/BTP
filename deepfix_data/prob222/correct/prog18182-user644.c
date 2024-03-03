#include <stdio.h>
int main() {
    float am,bm,cm;
    float ae,be,ce;
    float af,bf,cf;
    scanf("%f%f%f",am,bm,cm);
    scanf("%f%f%f",ae,be,ce);
    af=(40.0*am)/50 +(60*ae)/100;
    bf=(40.0*bm)/50 +(60*be)/100;
    cf=(40.0*cm)/50 +(60*ce)/100;
	if(af>=bf && af<=cf)
	printf("Median weighted score = %.2f",af);
	if(af>=bf && af<=cf)
	printf("Median weighted score = %.2f",af);
	if(af>=bf && af<=cf)
	printf("Median weighted score = %.2f",af);
	return 0; }