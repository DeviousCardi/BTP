#include <stdio.h>
#include <stdlib.h>
long long fact(long long n) {
    return n*fact(n-1); }
long long catalan(long long  n)
{long long s=0;
if(n==0) return 1;
else
  {  s=(fact(2*n)/(fact(n)*fact(n)))/(n+1);
  return s; }
return catalan(n-1); }
int main() {
long long  t,k,i;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
    scanf("%lld",&k);
printf("%lld\n",catalan(k)); }
	return 0; }