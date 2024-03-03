#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t[100000],i,alice=0,bob=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&t[i]);
	    sum=sum+t[i]; }
	i=0;
	printf("%d",sum);
	while(i!=n-i-1){
	      alice=alice+t[i];
	     i++; }
	printf("%d %d",alice,sum-alice);
	return 0; }