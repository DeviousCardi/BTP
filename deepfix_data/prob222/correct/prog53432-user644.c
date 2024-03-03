#include <stdio.h>
int main() {
    float am,bm,cm;
    float ae,be,ce;
    float af,bf,cf;
    scanf("%f %f %f",am,bm,cm);
    scanf("%f %f %f",ae,be,ce);
    af=(40.0*am)/50.0 + (60.0*ae)/100.0;
    bf=(40.0*bm)/50.0 + (60.0*be)/100.0;
    cf=(40.0*cm)/50.0 + (60.0*ce)/100.0;
	if((af>=bf && af<=cf) || (af<=bf && af>=cf)) {
	    printf("Median weighted score = %.2f",af);
	}else
	{printf("error");}
	 if((bf>=af && bf<=cf) || (bf<=af && bf>=cf)) {
	    printf("Median weighted score = %.2f",bf);
	}else
	{printf("error");}
	if((cf>=bf && cf<=af) || (cf<=bf && cf>=af)) {
	    printf("Median weighted score = %.2f",cf);
	}else
	{printf("error");}
	return 0; }