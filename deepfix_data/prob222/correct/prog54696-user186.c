#include <stdio.h>
int main() {
	float a,b,c,A,B,C;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&A,&B,&C); {
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