#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if (n==0)
    return 1;
    else {
        for (i=0;i<n;i++) {
            sum=sum+catalan(i)*catalan(n-1-i);
            return sum; } } }
int small(int k) {
    int i;
    if (k<=1)
    return ;
    else {
        for (i=1;;i++){
        if (k<=catalan(i+1) && k>catalan(i))
        return catalan(i); } } }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for (i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",small(k)); }
	return 0; }