#include <stdio.h>
int main() {
	float A1,A2,B1,B2,C1,C2,A,B,C;
	scanf("%f %f %f\n%f %f %f",&A1,&B1,&C1,&A2,&B2,&C2);
	A=(A1*40)/50.0+(A2*60)/100.0;
	B=(B1*40)/50.0+(B2*60)/100.0;
	C=(C1*40)/50.0+(C2*60)/100.0;
	if((A>=B&&B>=C)||(C>=B&&B>=A)) {
	    printf("Median weighted score = %.2f",B); }
	else if ((B>=C&&C>=A)||(A>=C&&C>=B)) {
	    printf("Median weighted score = %.2f",C); }
	else if ((C>=A&&A>=B)||(B>=A&&A>=C)) {
	    printf("Median weighted score = %.2f",A); }
	return 0; }