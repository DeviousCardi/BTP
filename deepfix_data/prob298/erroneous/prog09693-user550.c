#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1;
    return ((4*n+2)/(n+2))*catalan(n-1); }
int main() {
	int t,k;
	scanf("%d\n",&t);
	int i,j,c;
	for(i=0;i<17;i++)
	catalan(i));
	for(i=0;i<t;i++) {
	    c=0;
	    scanf("%d\n",&k);
	    for(j=0;j<17;j++) {
	        if(k==catalan(j)) {
	            printf("yes\n");
	            c++;
	            break; } }
	    if(c==0) printf("no\n"); }
	return 0; }