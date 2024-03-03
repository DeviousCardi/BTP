#include <stdio.h>
#include <stdlib.h>
int catalan_n(int n){
    int x,y;
    if (n==0||n==1)
    return 1;
    x=(2*(2*n+1))/(n+2);
    y=x;
    return y; }
int main() {
	int t,n,i,C;
	scanf("%d",&t);
	for(i=0;i<=t-1;i++){
	    scanf("%d",&n);
	    C=catalan_n(n);
	    printf("%d\n",C); }
	return 0; }