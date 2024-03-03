#include <stdio.h>
int main() {
	float a,b,c,A,B,C;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&A,&B,&C);
	A=(a*40.0/100)+(A*60.0/100);
	B=(b*40.0/100)+(B*60.0/100);
	C=(c*40.0/100)+(C*60.0/100);
	if(B>A) {
	   a=B;
	   B=A;
	   A=a; }
	if(A<=C) {
	   printf("%.2f",A); }
	else if(A>C){
	    if(C>=B) {
	      printf("%.2f",C); }
	    else
	    printf("%.2f",B); }
	return 0; }