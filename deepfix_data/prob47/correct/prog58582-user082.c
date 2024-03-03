#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    if(n==0) {
        return 1; }
    else {
        return 2*(((2*n)-1)/(n+1))*(n-1); } }
int main() {
	int i,k,t;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",Catalan_no(k)); }
	return 0; }