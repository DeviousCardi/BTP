#include <stdio.h>
int main() {
    float a,b,c,d,e,f;
    scanf("%f %f %f\n%f %f %f",&a,&b,&c,&d,&e,&f);
    double A=a*40/50+d*60/100;
	double B=b*40/50+e*60/100;
	double C=c*40/50+f*60/100; {
	    if(A>B&&A>C)
	    {if(B>C)
	    printf("Median weighted score = %.2lf",B);
	    else
	    printf("Median weighted score = %.2lf",C); }
	    else
	    {if(B>C)
	    {if(C>A)
	    printf("Median weighted score = %.2lf",C);
	    else
	    printf("Median weighted score = %.2lf",C); }
	    else
	    {if(B>A)
	    printf("Median weighted score = %.2lf",B);
	    else
	    printf("Median weighted score = %.2lf",A); } }
	    {if(A==B)
	    if(A==C)
	    printf("Median weighted score = %.2lf",A); } }
	return 0; }