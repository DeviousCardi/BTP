#include <stdio.h>
#include <stdlib.h>
int catalan(int n,int k){
    if(n>=0){
    if(n==1||n==0) return 1;
    else return catalan(n-1,k)*((k+n)/n); } }
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",catalan(n,n));
	return 0; }