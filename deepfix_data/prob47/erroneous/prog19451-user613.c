#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    return cat(n-1)*2*(2*n-1)/(n+1); }
int main() {
	int sum=0,i,n,t;
	scanf("%d",&n);
	for(j=0;j<n;j++){
	scanf("%d",&t)
	for(i=0;i<t;i++){
	    sum=sum+cat(i); }
	printf("%d",sum);}
	return 0; }