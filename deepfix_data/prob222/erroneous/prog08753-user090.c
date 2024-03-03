#include <stdio.h>
int main() {
 float l,m,n;
 float p,q,r;
 float A,B,C;
 scanf("%f%f%f%f%f%f",&l,&m,&n);
 A=((l*40)/50)+((p*60)/100) ;
 B=((m*40)/50)+((q*60)/100) ;
 C=((n*40)/50)+((q*60)/100) ;
 if(A>=B) {
      if(B>=C)
      { printf("%.2f",B);}
      else
       {if(C>=A)
          { printf("%.2",A);}
          else
          { printf("%.2",C);} } }
 else
      if(C>=B)
      {printf("%.2f",B);}
      else
       {if(C>=A)
          {printf("%.2",C);}
          else
       }  {printf("%.2",A);}
	return 0; }