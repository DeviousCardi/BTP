#include <stdio.h>
#include <stdlib.h>
int fac(int n){
    if(n==0)
    return 1;
    int i,prod=1;
    for(i=1;i<=n;i++){
        prod=prod*i; }
    return prod; }
int catalan(int k){
    return fac(2*k)/fac(k)/fac(k)/k+1; }
int main(){
	int test;
	scanf("%d\n",&test);
	 int i,j,k,result=0;
	for(i=0;i<test;i++){
	    scanf("%d\n",&k);
	    for(j=0;j<k;j++){
	        result=result+catalan(j); }
	    printf("%d\n",result); }
	printf("d");
	return 0; }