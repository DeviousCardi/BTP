#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum;
	sum=0;
	scanf("%d",&n);
	if(n>0){
	for(i=1;i<n;i++){
	    if(n%i==0){
	        sum=sum+i; } }
	if(sum==n) printf("YES");
	else printf("NO"); }
	return 0; }