#include <stdio.h>
#include <stdlib.h>
long long catalan(long long  n,long long s)
{ long long i;
if(n==0) return 1;
for(i=0;i<n;i++) {
    s=s+catalan(i,s)*catalan(n-i-1,s); }
return s; }
int main() {
long long  t,k,i,sum=0;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
scanf("%lld",&k);
printf("%lld\n",catalan(k,sum)); }
	return 0; }