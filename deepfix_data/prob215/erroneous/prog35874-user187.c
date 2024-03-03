#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,b,a[1000],sum=0,sum1=0;
    #define b=0;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	        if(n%i==0)
	        sum=sum+1; }
	        for(i=1;i<n;i++) {
	                if(n%i==0) {
	                    a[b]=i;
	                    b=b+1; }
	                else
	                continue; } }
	 for(j=0;j<sum;j++) {
	        sum1=sum1+a[j]; }
	 if(sum1==n)
	 printf("YES");
	 else
	 printf("NO");
	return 0; }