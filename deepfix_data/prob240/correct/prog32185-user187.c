#include <stdio.h>
#include <stdlib.h>
long int catalan(int k) {
    if(k<=1) {
            return 1; }
    long int sum=0;
    int i;
    for(i=0;i<k;i++) {
            sum=sum+catalan(i)*catalan(k-1-i); }
    return sum; }
int main() {
	int t,i,k[20],j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k[i]); }
	for(i=0;i<t;i++) {
	        for(j=0;j++;) {
	                if(k[i]<=catalan(j)) {
	                     printf("%ld",catalan(j-1));
	                     break; } }
	        printf("\n"); }
	return 0; }