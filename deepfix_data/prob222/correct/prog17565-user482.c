#include <stdio.h>
int main() {
	float A1=0,A2=0;
	float B1=0,B2=0;
	float C1=0,C2=0;
	scanf("%f%f%f%f%f%f",&A1,&B1,&C1,&A2,&B2,&C2);
	float A=((A1*40)/50.0)+((A2*60)/100.0);
	float B=((B1*40)/50.0)+((B2*60)/100.0);
	float C=((C1*40)/50.0)+((C2*60)/100.0);
	float D=0;
if(A<=B) {
    if (B<=C)
    {D=B;}
    else {
        if(A<=C){D=C;}
        else{D=A;} } }
else {
if(A<=C)
{D=A;}
else {
if(B<=C){D=C;}
else{D=B;} } }
printf("Median weighted score = %.2f",D);
	return 0; }