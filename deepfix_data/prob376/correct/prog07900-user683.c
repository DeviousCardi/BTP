#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==1||n==0) return 1;
    else return 2*(2*n-1)*catalan(n-1)/(n+1); }
int main() {
	int n,s[n],i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	scanf("%d",&s[i]);
	printf("%d\n",catalan(s[i])); }
	return 0; }