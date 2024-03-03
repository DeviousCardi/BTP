#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n<=1)
    return 1;
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=catalan(i)*catalan(n-i-1);
        return sum; }
int main() {
	int i,j,k,t;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    for(j=0;j<20;j++) {
	        if(catalan(j)>k); {
	            printf("%d",catalan(j));
	            break; } } }
	return 0; }