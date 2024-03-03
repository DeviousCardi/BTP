#include <stdio.h>
int main()
{float a,b,c,d,e,f,A,B,C;
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
A=a*40/50+d*60/100;
B=b*40/50+e*60/100;
C=c*40/50+f*60/100;
if(A>=B)
{if(C>=A)
printf("Median weighted score=%.2f",A);
else {
    if(C>=B)
    printf("Median weighted score=%.2f",B);
    else
   printf("Median weighted score=%.2f",C); }
else {
    if(C>=B)
    printf("median weighted score=%.2f",B);
    else
    {if(A>=C)
    printf("Median weighted score=%.2f",C);
    else
    printf("Median weighted score=%.2f",A); } } }
	return 0; }