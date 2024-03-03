#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    int i,sum=0;
    if(n==0) {
        return sum; }
    else {
        for(i=0;i<=n;i++)
        sum=sum+Catalan_no(i)*Catalan_no(n-i); } }
int main() {
	int i,k,t;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",Catalan_no(k)); }
	return 0; }