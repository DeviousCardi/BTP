#include <stdio.h>
#include <stdlib.h>
long long catalan(long long  n) {
if(n<=1) return 1;
else if(n==2) return 2;
 return   ((2*(2*n-1))*catalan(n-1)/(n+2)); }
int main() {
long long  s[1000];
long long  t,k,i,j=0;
scanf("%lld\n",&t);
for(i=0;i<1000;i++) {
    s[i]=catalan(i);
    printf("%lld\n",s[i]); }
for(i=0;i<t;i++) {
    scanf("%lld",&k);
    while(k<999999)
    {    if(s[j]<=k)
        {j++;}
        else if(k<s[j]) {
          printf("%lld\n",s[j]);
          break; } } }
	return 0; }