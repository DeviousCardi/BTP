#include <stdio.h>
#include <stdlib.h>
long long catalan(long long  n) {
if(n<=1) return 1;
else if(n==2) return 2;
 return   ((2*(2*n+1))/(n+2))*catalan(n-1); }
int main() {
long long  t,k,i;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
    scanf("%lld",&k);
printf("%lld\n",catalan(k)); }
	return 0; }