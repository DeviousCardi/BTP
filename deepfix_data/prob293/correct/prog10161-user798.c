#include <stdio.h>
#include <math.h>
int main() {
	int a,b ,c,d ,e,f,p ,q,r ;
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d%d%d%d%d%d",&d,&e,&f,&p,&q,&r);
	if(a*a+b*b<c*c){
	    printf("Obtuse Triangle \n"); }
	 if(p*p+q*q<r*r) {printf("Not Obtuse Triangle \n"); }
	if(d+e>f){
	    printf("Can form a Triangle \n "); }
	else{printf("Cannot form a Triangle \n");}
	return 0; }