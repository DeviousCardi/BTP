#include <stdio.h>
int main() {
	float p, q, r;
	float P, Q, R;
	float A, B, C;
	scanf("%f %f %f\n%f %f %f", &p, &q, &r, &P, &Q, &R);
	A = ((p*40)/50 + (P*60)/100) ;
	B = ((q*40)/50 + (Q*60)/100) ;
	C = ((r*40)/50 + (R*60)/100) ;
	if (A>B && C>A)
    printf("Median weighted score = %.2f", A);
	else if (B>C && A>B)
	printf("Median weighted score = %.2f", B);
	else if (C>A && B>C)
	printf("Median weighted score = %.2f", C);
	else if (B>A && A>C)
	printf("Median weighted score = %.2f", A );
	else if (C>B && B>A)
	printf("Median weighted score = %.2f", B);
	else if (A>C && C>B)
	printf("Median weighted score = %.2f", C);
    return 0; }