#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if(n==1) {
        return 0; }
    else if(n==2) {
        return 1; }
    else {
        return fibonacci(n-1)+fibonacci(n-2); } }
int main() {
	int t,i,k,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    ans=fibonacci(k);
	    printf("%d\n",ans); }
	return 0; }