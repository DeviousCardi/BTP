#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int k=n-1;
    if(n==0){
        return 0; }
    else{
        return ((2*(2*n+1))*cat(n-1))/(n+2); } }
int main() {
	int t,k,i,m;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k);
	    m=cat(k);
	    printf("%d\n",m); }
	return 0; }