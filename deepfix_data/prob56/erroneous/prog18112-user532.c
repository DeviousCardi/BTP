#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)return 1;
    return 2*(2*n+1)*cat(n-1)/(n+2); }
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&k);
	    for(i=0;;i++) {
	        if(cat(i)>k) {
	            printf("%d",cat(i));
	            break; } } }
	return 0; }