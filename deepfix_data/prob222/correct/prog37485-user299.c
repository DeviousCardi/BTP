#include <stdio.h>
int main() {
float a,b,c,d,e,f;
scanf ("%f%f%f/n%f%f%f",&a,&b,&c,&d,&e,&f);
float A,B,C;
A=a*40/50+d*60/100;
B=b*40/50+e*60/100;
C=c*40/50+f*60/100;
if((A<B)&&(B<C))
printf ("%f",B);
if((B<A)&&(A<C))
printf ("%f",A);
if((B<C)&&(C<A))
printf ("%f",C);
	return 0; }