#include <stdio.h>
int main() {
    float A,B,C;
	float A1,B1,C1;
	float A2,B2,C2;
	scanf("%f %f %f\n",&A1,&B1,&C1);
	scanf("%f %f %f",&A2,&B2,&C2);
    A=(A1*40/50)+(A2*60/100);
    B=(B1*40/50)+(B2*60/100);
    C=(C1*40/50)+(C2*60/100);
    if((B<A&&B>C)||(B>A&&B<C))
         printf("Median weighted score = %.2f",B);
    else if((A>B&&A<C)||(A<B&&A>C))
         printf("Median weighted score = %.2f",A);
    else
         printf("Median weighted score = %.2f",C);
	return 0; }