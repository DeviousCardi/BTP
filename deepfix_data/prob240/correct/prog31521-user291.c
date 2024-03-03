#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    return 2*(2*n-1)*catalan(n-1)/(n+1); }
int main() {
	int t,i,j;
	scanf("%d",&t);
	int ar[9999];
	for(i=0;i<t;i++) {
	    scanf("%d",&ar[i]); }
	for(i=0;i<t;i++) {
	    for(j=1;j<=ar[i];j++) {
	        if(catalan(j)<ar[i]&&catalan(j+1)>ar[i])
	        printf("%d",catalan(j)); } }
	return 0; }