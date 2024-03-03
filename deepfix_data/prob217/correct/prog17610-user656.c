#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,s,a[10000],i,j;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
	    scanf("%ld",&a[i]); }
	scanf("%ld",&s);
	for(i=0;i<n;i++){
	    for(j=0;j<n,j!=i;j++){
	        if((s-a[i]==a[j])&&(a[i]!=a[j]))
	        printf("(%ld,%ld)\n",a[i],a[j]); } }
	return 0; }