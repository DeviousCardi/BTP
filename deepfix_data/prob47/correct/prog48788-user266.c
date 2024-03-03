#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1;
    else
        return 2*(2*n+1)/(n+2)*catalan(n-1); }
int main() {
	int t,k,i,arr[]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(i=1;i<15;i++) {
	    arr[i]=arr[i-1]+catalan(i); }
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",arr[k-1]); }
	return 0; }