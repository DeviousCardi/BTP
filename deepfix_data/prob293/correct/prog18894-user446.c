#include <stdio.h>
#include <stdlib.h>
int main() {
	long int i,j,k,p,q,r,a,n,m;
	a=1;n=1;m=0;
	scanf("%d",&i);scanf("%d",&j);scanf("%d",&k);
	while(a<5)
	    { a=a+1;
	        if(i>(j+k)) {
	            printf("Cannot form a Triangle"); a=10;n=0; }
	       q=i; r=j; p=k;
	       i=p;j=q;k=r; }
	a=1;
	while(n!=0 && a<5)
	    {   if(i*i>j*j+k*k){printf("Obtuse triangle");a=0;m=1;a=10;}
	        q=i; r=j; p=k;
	       i=p;j=q;k=r;
	       a=a+1; }
	if(m==0 && n!=0)
	    {printf("Not Obtuse Triangle");}
	return 0; }