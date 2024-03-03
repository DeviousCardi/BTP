#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,p,q,r,a,n,m=0;
	a=1;
	scanf("%d",&i);scanf("%d",&j);scanf("%d",&k);
	while(a<5)
	    { a++;
	        if(i<(j+k)) {
	            printf("Cannot form a Triangle"); n=0;
	            break; }
	       q=i; r=j; p=k;
	       i=p;j=q;k=r; }
	a=1;
	while(n!=0 && a<5)
	    {   if(i*i>j*j+k*k){printf("Obtuse Triangle");a=0;m=1;break;}
	        q=i; r=j; p=k;
	       i=p;j=q;k=r;
	       a++; }
	if(m==0 && n!=0)
	    {printf("Not Obtuse Triangle");}
	return 0; }