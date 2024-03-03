#include <stdio.h>
#include <stdlib.h>
long long catalan(long long a){
    if(a==1)
    return 1;
    return (4*catalan(a-1)-3*catalan(a-2)); }
int main() {
	long long t,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
	    long long j=3,n,f=0;
	    scanf("%lld",&n);
	    while(catalan(j)<=n){
	        if(catalan(j)<=n){
	            f=1;
	            break; }
	        else
	        j++; }
	    if(f==1)
	    printf("Yes/n");
	    else
	    printf("No/n"); }
	return 0; }