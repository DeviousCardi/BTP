#include <stdio.h>
#include <stdlib.h>
int catalan(int n,int k){
    if(n==1||n==2) return 1;
    else return catalan(n-1,k)*((k+n)/n); }
int main() {
	int s,k,n;
	scanf("%d",&s);
	k=s+1;
	n=s+1;
	printf("%d",catalan(n,k));
	return 0; }