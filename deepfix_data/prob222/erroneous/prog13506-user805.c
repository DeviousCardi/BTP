#include <stdio.h>
int main() {
	float a1,a2,b1,b2,c1,c2;
	scanf("%f",&a1);
	scanf("%f",&a2);
	scanf("%f",&b1);
	scanf("%f",&b2);
	scanf("%f",&c1);
	scanf("%f",&c2);
	float A,B,C;
	A=a1*0.80+a2*0.60;
	B=b1*0.80+b2*0.60;
	C=c1*0.80+c2*0.60;
	if((A<=B)&&(B<=C)){
	    printf("%f",B); }
	    else if((B<=A)&&(A<=C)) {printf("%f",A);}
	    else if((B<=C)&&(C<=A)) {printf("%f",C);}
	    else if((A<=C)&&(C<=B)) {printf("%f",C);}
	    else if((C<=B)&&(B<=A)) {printf("%f",B);}
	    else if((C<=A)&&(A<=B)) {printf("%f",A);} }
return 0; }