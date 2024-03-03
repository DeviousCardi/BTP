#include <stdio.h>
int main() {
 float l,m,n;
 float p,q,r;
 float A,B,C;
 scanf("%f%f%f%f%f%f",&l,&m,&n,&p,&q,&r);
 A=l*40/50+((p*60)/100) ;
 B=((m*40)/50)+((q*60)/100) ;
 C=((n*40)/50)+((q*60)/100) ;
 printf("\n%f%f\n%f\n",A,B,C);
 if(A>B&&A<C||A>C&&A<B)
 {printf("Median weighted score =%.2f",A);}
 if(B>A&&B<C||B>C&&B<A)
 {printf("Median weighted score =%.2f",B);}
 if(A>C&&B<C||C>A&&B>C)
 {printf("Median weighted score =%.2f",C);}
 return 0; }