#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
    else
    return ((2*n-1)/((n)*(n+1)))*catalan(n-1); }
int main() {
	int t,i,a[t];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    printf("%d",catalan(a[i])); }
	return 0; }