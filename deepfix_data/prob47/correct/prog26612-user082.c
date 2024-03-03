#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    int sum,i;
    if(n==0) {
        return 1; }
    for(i=0;i<=n;i++)
    sum+=Catalan_no(i+1)*Catalan_no(n-i);
    if(i>=n)
    return sum; }
int main() {
	int i,t;
	long int k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%ld\n",&k);
	    printf("%d\n",Catalan_no(k)); }
	return 0; }