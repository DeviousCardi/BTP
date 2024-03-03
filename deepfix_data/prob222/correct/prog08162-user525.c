#include <stdio.h>
int main() {
	float a,b,c;
	float e,f,g;
	float A,B,C;
	scanf("%f %f %f \n %f %f %f",&a,&b,&c,&e,&f,&g);
    A=a*40/50+e*60/100;
    B=b*40/50+f*60/100;
    C=c*40/50+g*60/100;
    if(A<=B&&C<=A){printf("Median weighted score = %0.2f",A);};
    if(B<=A&&C<=B){printf("Median weighted score = %0.2f",B);};
    if(C<=B&&A<=C){printf("Median weighted score = %0.2f",C);};
    if(A<=C&&B<=A){printf("Median weighted score = %0.2f",A);};
    if(B<=C&&A<=B){printf("Median weighted score = %0.2f",B);};
    if(C<=A&&B<=C){printf("Median weighted score = %0.2f",C);};
    return 0; }