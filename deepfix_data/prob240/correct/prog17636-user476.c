#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,k,sum=0;
    if(n==0)
        return 1;
    for(i=0;i<n;i++) {
        sum=sum+catalan(i)*catalan(n-i); }
    return sum; }
void check(int k,int j) {
    if(k>catalan(j))
        printf("%d",catalan(j-1));
    else
    check(k,j+1); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    check(k,0); }
	return 0; }