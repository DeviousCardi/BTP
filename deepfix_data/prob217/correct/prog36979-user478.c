#include <stdio.h>
#include <stdlib.h>
int main() {
	long long i,j,k;
	long long n;
	long long S;
	scanf("%lld",n);
	long long a[n];
	    for(i=0;i<n;i++){
	        scanf("%lld",a[i]); }
	    scanf("%lld",S);
	    for(j=0;j<n;j++){
	        for(k=0;k<n;k++){
	            if((a[j]+a[k]==S) && (j>k)){
	                printf("%lld",(a[k],a[j]));
	                return 0; } } }
	return 0; }