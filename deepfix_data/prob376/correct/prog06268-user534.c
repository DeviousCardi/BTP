#include <stdio.h>
#include <stdlib.h>
long int fact(int n) {
    if (n==0)
    return 1;
    else if (n==1)
    return 1;
    return n*fact(n-1); }
long long int catalan(int n) {
    if (n==0) return 1;
    return (fact(2*n))/(fact(n+1)*fact(n)); }
int main() {
	int t,num[50],i;
	long long int p;
	scanf("%d\n",&t);
	for (i=0;i<t;i++) {
	    scanf("%d\n",&num[i]);
	    p=catalan(num[i]);
	    printf("%lld\n",p); }
	return 0; }