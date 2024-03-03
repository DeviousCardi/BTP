#include <stdio.h>
int main() {
	float A1,A2,B1,B2,C1,C2,P,Q,R;
	scanf("%f %f %f\n%f %f %f",&A1,&A2,&B1,&B2,&C1,&C2);
	P=(A1*40)/50.0+(A2*60)/100.0;
	Q=(B1*40)/50.0+(B2*60)/100.0;
	R=(C1*40)/50.0+(C2*60)/100.0;
	if((P>=Q&&Q>=R)||(R>=Q&&Q>=P)) {
	    printf("Median weighted score= %f",Q); }
	else if ((Q>=R&&R>=P)||(P>=R&&R>=Q)) {
	    printf("Median weighted score= %f",R); }
	else ((R>=P&&P>=Q)||(Q>=P&&P>=R)) {
	    printf("Median weighted score= %f",P); }
	return 0; }