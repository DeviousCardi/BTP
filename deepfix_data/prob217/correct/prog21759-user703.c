#include <stdio.h>
#include <stdlib.h>
int main() {
	long n,s,a[10000],i,j;
	scanf("%ld\n",&n);
	for(i=0;i<n;i++){scanf("%ld",&a[i]);}
	scanf("%ld",&s);
	for(i=0;i<n;i++){
	    for(j=i;j<n;j++){
	        if(a[i]+a[j]==s&&i!=j){
	            printf("(%ld,%ld)\n",a[i],a[j]); } } }
	return 0; }