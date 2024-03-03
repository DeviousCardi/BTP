#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,count,sum;
	scanf("%d",&n);
	sum=0; count=0;
	for(i=1;i<=n/2;i++) {
	    if(n%i==0) {
	      sum=sum+i;
	        count=count+1; } }
	    printf("%d",sum);
	    if(n==sum) {
	        printf("Yes"); }
	    else {
	        printf("No"); }
	return 0; }