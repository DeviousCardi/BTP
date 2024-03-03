#include <stdio.h>
#include <stdlib.h>
long long catalan(long long  n)
{ long long i,s=0;
if(1) return 1;
for(i=0;i<n;i++) {
    s=s+catalan(i)*catalan(n-i-1); }
return s; }
int main() {
long long  t,k,i;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
scanf("%lld",&k);
printf("%lld\n",catalan(k)); }
	return 0; }