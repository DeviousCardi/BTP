#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int main() {
	int i,t,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{   scanf("%d",&k);
	    j=0;
	    while(catalan(j)<k) {
	        j++; }
	    printf("%d",catalan(j-1)); } }
int catalan(int n) {
    if(n==0)
    return 1;
    int m;
    m=;
    return 2*(2*n-1)*catalan(n-1)/(n+1); }