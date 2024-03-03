#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,p,t;
	scanf("%d",&n);
	p=0;
	for(i=1;i<=n;i=i+1) {
	    if(n%i==0) {
	      if(((n%i)%i)!=o) {
	        t=n/i;
	        n=t;
	        p=p+i; }
	      else {
	         for(j=2;j++;j<n)
	         if(n%pow(i,j)!=0)
	         break;
	         p=p+ i*(j-1) } } }
	if(p==n)
	printf("Yes");
	else
	printf("No");
	return 0; }