#include <stdio.h>
#include <stdlib.h>
int catalan(float n) {
    int i,ans=0;
    if(n==0)
    ans=1;
    else
    for(i=0;i<n;i++)
    ans=ans+catalan(i)*catalan(n-1-i);
    return ans; }
int main() {
	int t;
	scanf("%d",&t);
	int k,i,j;
	for(i=0;i<t;i++) {
	    j=0;
	    scanf("%d",&k);
	    while(catalan(j)<=k)
	    j++;
	    printf("%d\n",catalan(j)); }
	return 0; }