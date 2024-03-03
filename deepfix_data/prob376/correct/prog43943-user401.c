#include <stdio.h>
#include <stdlib.h>
int catalan_n(int n){
    int x;
    if (n==0||n==1)
    return 1;
    else {
    x=((2*(2*n-1))/(n+1))*catalan_n(n-1);
    return x; } }
int main() {
	int t,n,i,C;
	scanf("%d",&t);
	for(i=0;i<=t-1;i++){
	    scanf("%d",&n);
	    C=catalan_n(n);
	    printf("%d\n",C); }
	return 0; }