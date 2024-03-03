#include <stdio.h>
#include <stdlib.h>
int cat(n) {
    int i,ans=0;
    if(n==0)
    return 1;
    else
    for(i=0;i<n;i++) {
        ans=ans+cat((n-1)-1); }
    return ans; }
int main() {
	int t;
	scanf("%d",&t);
	int k,i;
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",cat(k+1)); }
	return 0; }