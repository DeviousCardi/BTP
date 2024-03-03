#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==0) return 1;
    else return (2*((2*n)-1)*cat(n-1))/(n+1); }
int main() {
	int t,i,j;
	scanf("%d",&t);
	for (i=1;i<=t;i++){
	    int n;
	    scanf("%d",&n);
	    int sum=0;
	    for(j=0;j<=n;j++) {
	        sum+=cat(j); }
	    printf("%d\n",sum); }
	return 0; }