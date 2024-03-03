#include <stdio.h>
#include <stdlib.h>
int main() {
	int cat(int n){
	    float b;
	    if(n=0) return 1;
	    if(n!=0){
	        b=1.0*2*n*(2*n-1)*cat(n-1)/(n*n*(n+1));
	        return b; } }
	int i,t;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    printf("%d",cat(a[i])); }
	return 0; }