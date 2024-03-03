#include <stdio.h>
#include <stdlib.h>
int ctln(int n)
 { int ans=0,i;
    if(n==0)
    return 1;
    for(i=0;i<n;i++) {
        ans=ans+ctln(i)*ctln(n-i-1); }
    return ans; }
int main() {
	int i,j,k,t;
	scanf("%d\n",&t);
	    scanf("%d\n",&k);
	for(j=0;j<15;j++) {
	       printf("%d\n",ctln(j)); }
	return 0; }