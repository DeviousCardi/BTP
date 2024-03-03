#include <stdio.h>
int main() {
    float A1,A2,A;
    float B1,B2,B;
    float C1,C2,C;
    scanf("%f %f %f",&A1,&B1,&C1);
    scanf("%f %f %f",&A2,&B2,&C2);
    A=A1*40/50.0+A2*60/100.0;
    B=B1*40/50.0+B2*60/100.0;
    C=C1*40/50.0+C2*60/100.0;
	if((A>C && A<B)||(A<C && A>B)){
	    printf("Median weighted score = %.2f",A); }
	else if((B>C && B<A)||(B<C && B>A)){
	    printf("Median weighted score = %.2f",B); }
	else{
	    printf("Median weighted score = %.2f",C); }
	return 0; }