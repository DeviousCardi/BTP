#include <stdio.h>
int main() {
	float a1,b1,c1,a2,b2,c2,A,B,C;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	A=a1*0.8+a2*0.6;
	B=b1*0.8+b2*0.6;
	C=c1*0.8+c2*0.6;
	if((A>=C)&&(A<=B))
	printf("Median weighted score = %.2f",A);
	else if((A>=B)&&(A<=C))
	printf("Median weighted score = %.2f",A);
	else if((B>=A)&&(B<=C))
	printf("Median weighted score = %.2f",B);
	else if((B>=C)&&(B<=A))
	printf("Median weighted score = %.2f",B);
	else if((C>=B)&&(C<=A))
	printf("Median weighted score = %.2f",C);
	else if((C>=A)&&(C<=B))
	printf("Median weighted score = %.2f",C);
	return 0; }