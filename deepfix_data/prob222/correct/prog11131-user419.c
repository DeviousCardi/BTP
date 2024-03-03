#include <stdio.h>
int main() {
	float median;
	float a,b,c;
	float x,y,z;
	float A,B,C;
	scanf("%f%f%f",&a,&b,&c);
	printf("%f%f%f",a,b,c);
	scanf("\n%f%f%f",&x,&y,&z);
	printf("\n%f%f%f",x,y,z);
	A=a*40/50+x*60/100;
	B=b*40/50+y*60/100;
	C=c*40/50+z*60/100;
	printf("\n%.2f\n%.2f\n%.2f",A,B,C);
	if(A>B && B>C){
	    printf("%f",B);
	    if(B>C&&C>A){
	        printf("%f",C); }
	    else{
	        printf("%f",A); } }
	return 0; }