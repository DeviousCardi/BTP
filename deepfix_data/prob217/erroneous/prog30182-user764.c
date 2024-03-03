#include <stdio.h>
#include <stdlib.h>
int main() {
 longlongint,n a[n],i,j,s;
	scanf("%lld",&n);
	for(i=0;i<n;i=i=1){
	    scanf("%lld",&a[i]); }
	scanf("%lld",&s);
	for(i=0;i<n-1;i=i+1){
	    for(j=1+i;j<n;j=j+1){
	        if(s==a[i]+a[j]){
	            printf("(%lld,%lld)",a[i],a[j]); } } }
	return 0; }