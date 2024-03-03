#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n<=1)
        return 1;
    return(((4*n-2)*cat(n-1))/(n+1)); }
int main() {
    int t, k, sum;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&k);
	    sum=0;
	    while(k--) {
	        sum+=cat(k); }
	    printf("%d\n",sum); }
	return 0; }