#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
        return 1;
    else
        return (2*(2*n-1)*catalan(n-1))/(n+1); }
int main() {
    int t,k,sum=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=0;j<k;j++){
	       sum+=catalan(j); } }
	printf("%d",sum);
	return 0; }