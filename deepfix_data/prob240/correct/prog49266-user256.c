#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return((2*(2*n-1)/n+1)*catalan(n-1)); }
int main() {
	int t,ar[100],i,j,p;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&ar[i]);
	    for(j=0;j<1000;j++) {
	        if(catalan(j)<ar[i]) {
	        p=catalan(j); }
	        else break; }
	    printf("%d/n",p); }
	return 0; }