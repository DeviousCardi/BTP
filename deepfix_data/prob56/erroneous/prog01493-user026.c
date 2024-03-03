#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0||n==1)
    return 1;
    else {
        for(i=0;i<n;i++) {
            sum=catalan(i)*catalan(n-1-i)+sum; }
        return sum; } }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n;++) {
	    int k=catalan(i);
	    if(k>n) {
	        printf("%d",&k);
	        break; } }
	return 0; }