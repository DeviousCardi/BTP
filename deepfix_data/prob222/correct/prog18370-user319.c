#include <stdio.h>
int main() {
     float a,b,c,d,e,f;
     scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
     float A,B,C;
     A=a*40/50+d*60/100;
     B=b*40/50+e*60/100;
     C=c*40/50+f*60/100;
     if (A<B&&B<C)
     printf("Median weighted score = %.2f",B);
     else if(A<C&&C<B)
     printf("Median weighted score = %.2f",C);
     else if (B<A&&A<C)
     printf("Median weighted score = %.2f",A);
     else if (B<C&&C<A)
     printf("Median weighted score = %.2f",C);
     else if (C<A&&A<B)
     printf("Median weighted score = %.2f",A);
     else if (C<B&&B<A)
     printf("Median weighted score = %.2f",B);
     if (A==B==C)
     printf("Median weighted score = %.2f",A);
	return 0; }