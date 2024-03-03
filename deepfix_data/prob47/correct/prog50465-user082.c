#include <stdio.h>
#include <stdlib.h>
int Catalan_no(int n) {
    int i,sum=0;
    if(n==0) {
        return 1; }
    else {
        for(i=0;i<n;i++) {
        sum=sum+Catalan_no(i)*Catalan_no(n-i-1); } }
    return sum; }
int main() {
	int i,k,t,sum=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    for(i=0;i<k;i++) {
	        sum+=Catalan_no(k); }
	    printf("%d",sum); }
	return 0; }