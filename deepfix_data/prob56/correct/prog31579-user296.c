#include <stdio.h>
#include <stdlib.h>
long long s=0;
long long fact(long long n) {
    return n*fact(n-1); }
long long catalan(long long  n)
{ long long i;
if(n==0) return 1;
for(i=0;i<n;i++) {
    s=s+(fact(2*n)/(fact(n)*fact(n)))/(n+1); }
return catalan(n-1); }
int main() {
long long  t,k,i;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
s=0;
scanf("%lld",&k);
printf("%lld\n",catalan(k+1)); }
	return 0; }