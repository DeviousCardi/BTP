#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,p,t;
	scanf("%d",&n);
	p=0;
	for(i=1;i<n;i++) {
	    if(n%i==0) {
	        t=n/i;
	        n=t;
	        p=p+i; }
	   if(p==n)
	   {printf("Yes");}
	   else
	   {printf("No");} }
	return 0; }