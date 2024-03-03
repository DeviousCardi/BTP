#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int sum=0, ans=0;
int catalan(int n)
{ int catn;
 if (n==0){sum++;
 return 1;}
 else
 { catn=catalan(n-1);
     ans=(4*n - 2)*(catn)/(n+1);
 sum=sum+ans;
 return ans; } }
int main() {
int i,t=0, n=0,nrj=0;
scanf ("%d",&t);
for(i=0;i<t;i++) {
    scanf ("%d",&n);
    nrj=catalan(n-1);
    printf("%d\n", sum);
    sum=0; ans=0;
    if (n==0); }
	return 0; }