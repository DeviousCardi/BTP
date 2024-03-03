#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(int k) {
    if(k<=1) {
        return 1; }
unsigned long int sum=0,i;
        for(i=0;i<k;i++) {
            sum=sum+catalan(i)*catalan(k-1-i); }
        return sum; }
int main() {
	int t,i,k[100];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k[i]); }
	for(i=0;i<t;i++) {
	    printf("%ld\n",catalan(k[i])); }
	return 0; }