#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n=0) return 1;
    else
    return((2*(2*n-1)/n+1)*catalan(n-1)); }
int main() {
	int t,ar[100];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&ar[i]);
	        if(catalan(j)<ar[i]) {
	        p=catalan(j);
	        j++;
	        continue; }
	        else break; }
	    printf("%d",p); }
	return 0; }