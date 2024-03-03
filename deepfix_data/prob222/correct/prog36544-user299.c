#include <stdio.h>
int main() {
float a,b,c,d,e,f;
scanf ("%d%d%d/n%d%d%d,&a,&b,&c,&d,&e,&f");
float A,B,C;
A=a*40/50+d*60/100;
B=b*40/50+e*60/100;
C=c*40/50+f*60/100;
if(A<B<C)
printf("B");
if(B<A<C)
printf("A");
if(B<C<A)
printf ("C");
	return 0; }