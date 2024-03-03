#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	float a,b,s1,s2,x,area,dx;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for(x=-2;x<=0;x++){
	    if(a<=x<=b){
	    s1=s1+(2*x*x*x-8*x);
	}else
	break;}
	for(x=0;x<=2;x++){
	    if(a<=x<=b){
	    s1=s1+(8*x-2*x*x*x);
	    else
	    break;} }
	return 0; }