#include <stdio.h>
#include <stdlib.h>
int scan(t,k)
{  if(t==0) return 0;
 else
    scanf("%d\n",&t);
    return scan(t-1,k); }
int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int catalan(int n,int s) {
int r=0;
if(r<n)
for(r=0;r<n;r++) {
s=s+fact(r)*fact(n-r-1); }
    return catalan(n-1,s); }
int main() {
int t,k;
 int sum=0;
scanf("%d\n",&t);
scan(t,k);
printf("%d",catalan(k,sum));
	return 0; }