#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{    if(n==1)
    return 1;
    return ((4*n-2)*catalan(n-1))/(n+1); }
    int iscatalan(int k) {
        if(k==0)
        return 1;
        int i=1;
        while(catalan(i)<=k) {
            if(catalan(i)==k)
            return 1;
            i++; }
        return 0; }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    if(iscatalan(k))
	    printf("yes\n");
	    else printf("no\n"); }
	return 0; }