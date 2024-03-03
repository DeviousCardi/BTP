#include <stdio.h>
#include <stdlib.h>
int fact(long long int n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int catalan(int n,int s) {
int r=0;
if(n==0) return 1;
if(r<n)
for(r=0;r<n;r++) {
s=s+fact(r)*fact(n-r-1); }
return s;
    return catalan(n-1,s); }
int main() {
long long int t,k,i;
 int sum=1;
scanf("%lld\n",&t);
for(i=0;i<t;i++) {
scanf("%lld",&k);
printf("%d\n",catalan(k,sum)); }
	return 0; }