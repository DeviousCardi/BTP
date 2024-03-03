#include <stdio.h>
int main() {
float A,B,C,am,bm,cm,ae,be,ce;
scanf("%f",&am);
scanf("%f",&bm);
scanf("%f",&cm);
scanf("%f",&ae);
scanf("%f",&be);
scanf("%f",&ce);
A=am*40/50+ae*60/100;
B=bm*40/50+be*60/100;
C=cm*40/50+ce*60/100;
if((A<=B&&B<=C)||(C<=B&&B<=A))
printf("Median weighted score = %d",B);
else if((C<=A&&A<=B)||(B<=A&&A<=C))
printf("Median weighted score = %d",a);
else if((A<=C&&C<=B)||(B<=C&&C<=A))
printf("Median weighted score = %d",c);
	return 0; }