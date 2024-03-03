#include <stdio.h>
int main() {
float a,b,c,d,e,f;
scanf ("%f%f%f/n%f%f%f",&a,&b,&c,&d,&e,&f);
float A,B,C;
A=a*40/50+d*60/100;
B=b*40/50+e*60/100;
C=c*40/50+f*60/100;
if((A<B)&&(B<C))
printf ("%.2f",B);
if((B<A)&&(A<C))
printf ("%.2f",A);
if((B<C)&&(C<A))
printf ("%.2f",C);
if((C<B)&&(B<A))
printf("%.2f",B);
if((B<A)&&(A<C))
printf("%.2f",A);
if((B<C)&&(C<B))
printf("%.2f",C);
	return 0; }