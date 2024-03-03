#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    if(n==2) return 2;
    return (catalan(n-1))*(2*n-1)*2/(n+1); }
int main() {
	int t,i,k,n;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k);
	    for(n=1;n<=17;n++){
	        if(k==catalan(n))
	        {printf("yes\n");
	        break;} }
	    if(n==18) printf("no\n"); }
	return 0; }