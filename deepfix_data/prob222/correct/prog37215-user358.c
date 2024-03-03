#include <stdio.h>
int main() {
    float a,b,c,d,e,f;
    scanf("%f %f %f\n%f %f %f",&a,&b,&c,&d,&e,&f);
    float A=a*40/50+d*60/100;
	float B=b*40/50+e*60/100;
	float C=c*40/50+f*60/100; {
	    if(A>B&&A>C)
	    {if(B>C)
	    printf("Median weighted score = %.2f",B);
	        else
	        printf("Median weighted score = %.2f",C);
	    }}
	    if(B>C&&B>A)
	    {if(A>C)
	    printf("Median weighted score = %.2f",A);
	    else
	        printf("Median weighted score = %.2f",C); }
	    if(C>B&&C>A)
	    {if(B>A)
	    printf("Median weighted score = %.2f",B);
	    else
	        printf("Median weighted score = %.2f",A); }
	    if(A==B)
	    if(A==C)
	    printf("Median weighted score = %.2f",A);
	return 0; }