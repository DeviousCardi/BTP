#include <stdio.h>
int main() {
	float A1,B1,C1,A2,B2,C2,P,Q,R;
	scanf("%f %f %f\n%f %f %f",&A1,&A2,&B1,&B2,&C1,&C2);
	P=(A1*40)/50.0+(A2*60)/100.0;
	Q=(B1*40)/50.0+(B2*60)/100.0;
	R=(C1*40)/50.0+(C2*60)/100.0;
	if((P>=Q&&Q>=R)||(R>=Q&&Q>=P)) {
	    printf("Median weighted score= %.2f",Q); }
	else if ((Q>=R&&R>=P)||(P>=R&&R>=Q)) {
	    printf("Median weighted score= %.2f",R); }
	else if ((R>=P&&P>=Q)||(Q>=P&&P>=R)) {
	    printf("Median weighted score= %.2f",P); }
	return 0; }