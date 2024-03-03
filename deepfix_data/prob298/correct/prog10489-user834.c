#include <stdio.h>
#include <stdlib.h>
long long catalan(long long a){
    if(a==1)
    return 1;
    else if(a==2)
    return 1;
    return (4*catalan(a-1)-3*catalan(a-2)); }
int main() {
	long long t,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++){
	    int j=3,f=0;
	    long long n;
	    scanf("%lld",&n);
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