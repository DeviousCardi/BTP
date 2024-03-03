#include <stdio.h>
int main() {
	float a1,a2,b1,b2,c1,c2;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	float A=a1*0.8+a2*0.6;
	float B=b1*0.8+b2*0.6;
	float C=c1*0.8+c2*0.6;
	if((A>B&&A<C)||(A<B&&A>C)) {
	    printf("Median weighted score = %.2f",A); }
	else
	if((B>A&&B<C)||(B>C&&B<A)) {
	    printf("Median weighted score =%.2f",B); }
	else
	if((C>B&&C<A)||(C>A&&C<B)) {
	    printf("Median weighted score =%.2f",A); }
	return 0; }