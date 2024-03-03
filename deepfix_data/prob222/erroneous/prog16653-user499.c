#include <stdio.h>
int main()
{float a,b,c;
 float A,B,C;
 float p,q,r;
 scanf("%f %f %f",&a,&b,&c);
 scanf("%f %f %f",&p,&q,&r);
 A=a*40/50+p*60/100;
 B=b*40/50+q*60/100;
 C=c*40/50+r*60/100;
 if(A<B){
   if(A<C){
     if(B<C){
    printf("Median weighted score=%.2f",B);
   }else
     {printf("Median weighted score=%.2f",C);}
 }else
     {printf("Median weighted score=%.2f",A);}
}else {
    if(B<C){
     if(A<C){
     printf("Median weighted score=%.2f",A}
   }else{
     printf("Median weighted score=%.2f",C);} }
        }else{
            printf(" Median weighted score=%.2f",B); } } }
	return 0; }