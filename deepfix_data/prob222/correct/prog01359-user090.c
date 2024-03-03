#include <stdio.h>
int main() {
 float l,m,n;
 float p,q,r;
 float A,B,C;
 scanf("%f%f%f%f%f%f",&l,&m,&n,&p,&q,&r);
 A=((l*40)/50)+((p*60)/100) ;
 B=((m*40)/50)+((q*60)/100) ;
 C=((n*40)/50)+((q*60)/100) ;
 if(A>=B) {
      if(B>=C)
      { printf("Median weighted score=%.2f",B);}
      else
       {if(C>=A)
          { printf("Median weighted score=%.2f",A);}
          else
          { printf("Median weighted score=%.2f",C);} } }
 else
      if(C>=B)
      {printf("Median weighted score=%.2f",B);}
      else
       {if(C>=A)
          {printf("Median weighted score=%.2",C);}
        else
         {printf("Median weighted score=%.2",A);} }
	return 0; }