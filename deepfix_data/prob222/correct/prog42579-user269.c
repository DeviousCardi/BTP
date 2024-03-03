#include <stdio.h>
int main()
{float a,b,c,d,e,f,A,B,C;
scanf("%f %f %f\n",&a,&b,&c);
scanf("%f %f %f",&d,&e,&f);
A=a*40.0/50.0+d*60/100.0;
B=b*40.0/50.0+e*60/100.0;
C=b*40.0/50.0+e*60/100.0;
if(A<=B){if(B<=C) printf("%f",B);
else {if(A<=c) printf("%f",C);
       else printf("%f",A);}}
    else{if(B<=C) printf("%f",B);
    else printf("%f",C);}
	return 0; }