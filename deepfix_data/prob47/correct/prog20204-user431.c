#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    return (4*n-2)*cat(n-1)/(n+1); }
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
	    int k,j,sum=0;
	    scanf("%d", &k);
	    for(j=0;j<k;j++) {
	        sum+=cat(j); }
	    printf("%d\n", sum); }
	return 0; }