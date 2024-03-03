#include <stdio.h>
#include <stdlib.h>
int catalan(int n,int k){
    if(n==1||n==2) return 1;
    else return catalan(n-1,k)*((k+n)/n); }
int main() {
	int s,k,n;
	scanf("%d",&n);
	printf("%d",catalan(n,n));
	return 0; }