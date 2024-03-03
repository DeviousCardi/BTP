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
	    for(j=n;j>n/2;j--){
	        for(k=n/2;k>0;k++){
	            if((a[j]+a[k]==S) && (j>k)){
	                printf("(%lld,%lld)\n",a[k],a[j]);
	            }else
	            continue; } }
	return 0; }