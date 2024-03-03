#include <stdio.h>
int main()
{  float a,p;
float b,q;
float c,r;
scanf("%f %f %f\n%f %f %f",&a,&b,&c,&p,&q,&r);
float A;
float B;
float C;
A= a*40/50+p*60/100 ;
B= b*40/50+q*60/100 ;
C= c*40/50+r*60/100;
if((A>B)&&(A>C))
 { if(B>C)
 {printf("Median weighted score = %f",B);}
 else{printf("%dMedian weighted score =%f",C);} }
 else{if (B>C)
     {if (C>A)
         printf("%dMedian weighted score =%f",C);
         else  {printf("%dMedian weighted score =%f",A);} }
        else{if(B>A)
             printf("%dMedian weighted score =%f",B);
             else {printf("%dMedian weighted score =%f",A);} } }
	return 0; }