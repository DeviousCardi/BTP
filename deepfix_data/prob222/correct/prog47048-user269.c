#include <stdio.h>
int main()
{float a,b,c,d,e,f,A,B,C;
scanf("%f %f %f\n",&a,&b,&c);
scanf("%f %f %f",&d,&e,&f);
A=a*40.0/50.0+d*60/100.0;
B=b*40.0/50.0+e*60/100.0;
C=c*40.0/50.0+f*60/100.0;
if(A<=B){if(B<=C) printf("Median weighted score = %.2f",B);
else {if(A<=C) printf("Median weighted score = %.2f",C);
       else printf("Median weighted score = %.2f",A);}}
    else{if(B<=C) printf("Median weighted score = %.2f",C);
    else printf("Median weighted score = %.2f",B);}
	return 0; }