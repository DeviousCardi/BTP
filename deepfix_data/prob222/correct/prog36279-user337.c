#include <stdio.h>
int main() {
    float a,b,A;
    float c,d,B;
    float e,f,C;
    scanf("%f %f %f\n%f %f %f",&a,&c,&e,&b,&d,&f);
    A=(a*40/50)+(b*60/100);
    B=(c*40/50)+(d*60/100);
    C=(e*40/50)+(f*60/100);
    if((A>B)&&(C>B)) printf("Median weighted score=%.2f",B);
    if((A>C)&&(B>C)) printf("Median weighted score=%.2f",C);
    if((C>A)&&(B>C)) printf("Median weighted score=%.2f",A);
	return 0; }