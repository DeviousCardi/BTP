#include <stdio.h>
int main() {
    float A,B,C,am,bm,cm,ae,be,ce;
    scanf("%f",&am);
    scanf("%f",&bm);
	scanf("%f",&cm);
	scanf("%f",&ae);
	scanf("%f",&be);
	scanf("%f",&ce);
	A=am*40/50+ae*60/100;
	B=bm*40/50+be*60/100;
	C=cm*40/50+ce*60/100;
	if(A<=B&&B<=C)
	printf("Median weighted score = %.2f",B);
	else if(C<=B&&B<=A)
    printf("Median weighted score = %.2f",B);
	else if(B<=A&&A<=C)
	printf("Median weighted score = %.2f",A);
	else if(C<=A&&A<=B)
	printf("Median weighted score = %.2f",A);
	else if(A<=C&&C<=B)
	printf("Median weighted score = %.2f",C);
	else if(B<=C&&C<=A)
	printf("Median weighted score = %.2f",C);
	else if(A==B&&B==C&&C==A)
	printf("Median weighted score = %.2f",C);
	return 0; }