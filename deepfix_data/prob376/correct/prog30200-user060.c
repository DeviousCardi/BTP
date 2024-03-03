#include <stdio.h>
#include <stdlib.h>
int catalan(int n,int k){
    if(n==1||n==2) return 1;
    else return catalan(n-1,k)*((k+n)/n); }
int main() {
	int s,k,n;
	scanf("%d",&s);
	k=s;
	n=s;
	printf("%d",catalan(n,k));
	return 0; }