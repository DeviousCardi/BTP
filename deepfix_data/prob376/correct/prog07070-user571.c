#include <stdio.h>
#include <stdlib.h>
long catalan(int);
long summation(int);
long summation(int n) {
    long i,sum=0;
    for(i=0;i<=n;i++) {
        sum=sum+catalan(n-i)*catalan(i); }
    return sum; }
long catalan(int n) {
    if(n==0||n==1) {
        return 1; }
    return summation(n-1); }
int main() {
    int i,t,n;
	scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        printf("%d\n",catalan(n)); }
	return 0; }