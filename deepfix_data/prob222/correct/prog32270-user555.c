#include <stdio.h>
int main() {
	float a1,b1,c1,a2,b2,c2,A,B,C;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	A=a1*0.8+a2*0.6;
	B=b1*0.8+b2*0.6;
	C=c1*0.8+c2*0.6;
	if((A>=C)&&(A<=B))
	printf("Median weighted score\n= %.2f",A);
	if((A>=B)&&(A<=C))
	printf("Median weighted score\n= %.2f",A);
	if((B>=A)&&(B<=C))
	printf("Median weighted score\n= %.2f",B);
	if((B>=C)&&(B<=A))
	printf("Median weighted score\n= %.2f",B);
	if((C>=B)&&(C<=A))
	printf("Median weighted score\n= %.2f",C);
	if((C>=A)&&(C<=B))
	printf("Median weighted score\n= %.2f",C);
	return 0; }