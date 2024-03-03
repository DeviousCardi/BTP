#include <stdio.h>
int main()
{  float a,p;
float b,q;
float c,r;
float marks;
scanf("%f %f %f\n%f %f %f",&a,&b,&c,&p,&q,&r);
float A;
float B;
float C;
A= a*40/50+p*60/100 ;
B= b*40/50+q*60/100 ;
C= c*40/50+r*60/100;
if((A>B)&&(A>C))
 { if(B>C)
 {printf("Median weighted score=B");}
 else{printf("Median weighted score=C");} }
 else{if (B>C)
     {if (C>A)
         printf("Median weighted score =C");
         else  {printf("Median weighted score=A");} }
        else{if(B>A)
             printf("Median weighted score=B");
             else {printf("Median weighted score=A")} } } }
	return 0; }