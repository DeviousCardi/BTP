#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n,s;
	int i,j,k,a[1000];
	scanf("%lld\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	scanf("%lld",&s);
	for(j=0;j<n;j++){
	    for(k=j+1;k<n;k++){
	        if(s==a[j]+a[k]){
	            printf("(%d,%d)",a[j],a[k]); }
	        else{
	            break; } } }
	return 0; }