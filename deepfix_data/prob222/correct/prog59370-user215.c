#include <stdio.h>
int main() {
    float a,b,c;
    float p,q,r;
    float A,B,C;
    scanf("%f%f%f",&a,&b,&c);
    scanf("%f%f%f",&p,&q,&r);
    A=a*40/100+p*60/100;
    B=b*40/100+q*60/100;
    C=c*40/100+r*60/100;
    scanf("%f%f%f",&A,&B,&C);
    if(((A<B)&&(B<C))||((A>B)&&(B>C))) {
        printf("%.2f",B); }
    if(((B<A)&&(A<C))||((B>A)&&(A>C))) {
        printf("%.2f",A); }
	if(((A<C)&&(C<B))||((A>C)&&(C>B))) {
	    printf("%.2f",C); }
	return 0; }