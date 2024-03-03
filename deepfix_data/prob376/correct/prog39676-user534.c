#include <stdio.h>
#include <stdlib.h>
long int fact(int n) {
    if (n==0)
    return 1;
    else if (n==1)
    return 1;
    return n*fact(n-1); }
long int catalan(int n) {
    if (n==0) return 1;
    return (fact(2*n))/(fact(n+1)*fact(n)); }
int main() {
	int t,num[50],i;
	long int p;
	scanf("%d",&t);
	for (i=0;i<t;i++) {
	    scanf("%d",&num[i]);
	    p=catalan(num[i]);
	    printf("%ln",p); }
	return 0; }