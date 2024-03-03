#include <stdio.h>
int main() {
    float a,b,c,d,e,f,A,B,C,median;
    scanf("%f %f %f\n %f %f %f ", &a,&b,&c,&d,&e,&f);
	A= (a*40)/50 + (d*60)/100;
	B= (b*40)/50 + (e*60)/100;
	C= (c*40)/50 + (f*60)/100;
	  if (A<B&& B<C){ median= B;}
	  else if(B<C&& C<A){median=C;}
	  else { median=A;}
	printf("%0.2f", median);
	return 0; }