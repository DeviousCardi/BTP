#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int i,j,k;
	long long  int n;
	long long int S;
	scanf("%lld",&n);
	long long int a[n];
	    for(i=0;i<n;i++){
	        scanf("%lld",&a[i]); }
	    scanf("%lld",&S);
	    for(j=0;j<n;j++){
	        for(k=0;k<n;k++){
	            if((a[j]+a[k]==S) && (j>k)){
	                printf("(%lld,%lld)",a[k],a[j]);
	            }else
	            break; } }
	return 0; }