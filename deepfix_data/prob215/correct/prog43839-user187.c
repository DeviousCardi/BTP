#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,a[1000],sum=0,sum1=0;
	scanf("%d",&n);
	for(i=1;i<n;i++) {
	        if(n%i==0)
	        sum=sum+1; }
	 for(i=1;i<n;i++) {
	        for(j=0;j<sum;j++) {
	                if(n%i==0) {
	                        a[j]=i; } } }
	 for(j=0;j<sum;j++) {
	        sum1=sum1+a[j]; }
	 if(sum1==n)
	 printf("YES");
	 else
	 printf("NO");
	return 0; }