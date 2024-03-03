#include <stdio.h>
int main() {
    float a,b,A;
    float c,d,B;
    float e,f,C;
    scanf("%f%f%f",&a,&c,&e);
    scanf("%f%f%f",&b,&d,&f);
    A=(a*40.0/50.0)+(b*60.0/100.0);
    B=(c*40.0/50.0)+(d*60.0/100.0);
    C=(e*40.0/50.0)+(f*60.0/100.0);
    if(((A>B)&&(B>C))||((B>A)&&(C>B)))
    printf("Median weighted score = %.2f",B);
    if(((A>C)&&(C>B))||((C>A)&&(B>C)))
    printf("Median weighted score = %.2f",C);
    if(((C>A)&&(A>B))||((B>A)&&(A>C)))
    printf("Median weighted score = %.2f",A);
	return 0; }