#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else {
        int i;
        int sum=0;
        for(i=0;i<n;i++)
            sum=sum+catalan(i)*catalan((n-1)-i);
            return sum; } }
int main() {
	int t,j;
	scanf("%d\n",&t);
	int i,k;
	for(i=0;i<t;i++) {
	    j=0;
	    scanf("%d\n",&k);
	    for(j=0;j>=0;j++)
	    if(catalan(j)>k) {
	            printf("%d\n",catalan(j)); break; } }
	return 0; }