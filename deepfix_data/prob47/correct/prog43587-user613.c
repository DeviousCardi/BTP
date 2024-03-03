#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    return cat(n-1)*2*(2*n-1)/(n+1); }
int main() {
	int sum=0,i,n,t,j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
	scanf("%d",&t);
	    sum=sum+cat(t);
	printf("%d\n",sum);}
	return 0; }