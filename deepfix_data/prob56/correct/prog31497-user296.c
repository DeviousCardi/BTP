#include <stdio.h>
#include <stdlib.h>
long long catalan(long long  n) {
if(n<=1) return 1;
else if(n==2) return 2;
 return   ((2*(2*n+1))*catalan(n-1)/(n+2)); }
int main() {
long long  t,k,i;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
    scanf("%lld",&k);
    while(k<32678) {
        if(k==((2*(2*k+1))*catalan(k-1)/(k+2))) {
          printf("%lld\n",catalan(k));
          break; }
        k++; } }
	return 0; }