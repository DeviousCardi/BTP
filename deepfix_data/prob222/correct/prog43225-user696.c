#include <stdio.h>
int main() {
    float a1,a2,a3;
    float b1,b2,b3;
    float c1,c2,c3;
    float A,B,C;
    float m;
    scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	A=a1*40/50+a2*60/100;
	B=b1*40/50+b2*60/100;
	C=c1*40/50+c2*60/100;
	if(A<=B) {
	    if(B<=C){m=B;}
	    else if(A<=C){m=C;}
	    else{m=A;} }
	else {
	    if(B<=C){m=B;}
	    else if(A>=C){m=C;}
	    else{m=A;} }
	    printf("Median weighted score=%.2f",m);
	return 0; }