#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0) {
        return 0; }
    else if(n>0) {
        for(i=0;i<n;i++) {
            sum=sum+ catalan(i)*catalan(n-1-i); } }
    return sum; }
int main() {
	int t,i,j;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&j);
	    printf("%d\n",catalan(j)); }
	return 0; }