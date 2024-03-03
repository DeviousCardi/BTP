#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,p,q,r,a,n,m;
	a=1;n=1;m=1;
	scanf("%d",&i);scanf("%d",&j);scanf("%d",&k);
	while (a<5) {
        p=j,q=k,r=i;
        i=p,j=q,k=r;
	    a=a+1;
	    if (i>=j && i>=k){a=10;} }
	if(i>=(j+k)) {
	   printf("Cannot form a Triangle");n=0; }
   if(i*i>j*j+k*k && n==1) {printf("Obtuse Triangle");m=0;}
	if(m==1 && n==1) {printf("Not Obtuse Triangle");}
	return 0; }