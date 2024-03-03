#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,sum,k=100000000;
	scanf("%d",&n);
	for(i=1;i<n;i++){
	    if(n%i==0){
	        sum=sum+i; } }
	if(sum==n){
	    printf("YES"); }
	else{
	    printf("NO"); }
	printf("\n%d",k);
	return 0; }