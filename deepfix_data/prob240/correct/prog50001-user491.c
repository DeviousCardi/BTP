#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0) return 1;
    else return (4*n-2)*(cat(n-1))/(n+1); }
int main() {
	int i,t,k,j;
	scanf("%d",&t);
	int ar[t];
	for(i=0;i<t;i++){
	    j=scanf("%d",&k);
	    ar[i]=j;
	    printf("%d",ar[i]); }
    return 0; }