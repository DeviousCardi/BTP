#include <stdio.h>
int main()
{   float a ;
    float b ;
    float c ;
    float e ;
    float f ;
    float g ;
    scanf("%f%f%f\n",%a,%b,%c);
    scanf("%f%f%f",%e,%f,%g);
    float mid = ((a+b+c)/3.0)/50.0)*0.4 ;
    float end = ((e+f+g)/3.0)/100.0)*0.6;
	printf("Median weighted score",mid+end);
	return 0; }