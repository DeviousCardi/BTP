#include <stdio.h>
#include <stdlib.h>
long long catalan(long long a){
    if(a<=1)
    return 1;
    return ((2*(2*a-1)*catalan(a-1))/(a+1)); }
int main() {
	long long t,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
	    long long j=0,f=0;
	    long long n;
	    scanf("%lld",&n);
	   printf("%lld ",catalan(17));
	    while(catalan(j)<=n){
	        if(catalan(j)==n){
	            f=1;
	            break; }
	        else
	        j++; }
	    if(f==1)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }