#include <stdio.h>
#include <stdlib.h>
long long s=0;
long long catalan(long long  n)
{ long long i;
if(n==0) return 1;
for(i=0;i<n;i++) {
    s=s+catalan(i)*catalan(n-i-1)+1; }
return s; }
int main() {
long long  t,k,i;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
s=0;
scanf("%lld",&k);
printf("%lld\n",catalan(k+1)); }
	return 0; }