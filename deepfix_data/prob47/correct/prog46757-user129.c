#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int sum=0, ans=0;
int catalan(int n)
{ int catn;
 if(n==1)
 return 1;
 if (n==0)
 return 1;
 else
 { catn=catalan(n-1);
     ans=(4*n - 2)*(catn)/(n+1);
 return ans; } }
int main() {
int i,k,t=0, n=0,p=0;
scanf ("%d",&t);
for(i=0;i<t;i++) {
    scanf ("%d",&n);
    for(k=0;k<n;k++)
    p+=catalan(n);
    printf("%d\n", p); }
	return 0; }