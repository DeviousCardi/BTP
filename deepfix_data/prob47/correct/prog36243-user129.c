#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int sum=0, ans=0;
int catalan(int n)
{ int catn;
 if (n<0)return 0;
 if (n==0)
 return 1;
 else
 { catn=catalan(n-1);
 sum=sum+ans;ans=(4*n - 2)*(catn)/(n+1);
 return ans; } }
int main() {
int i,t=0, n=0,p=0;
scanf ("%d",&t);
for(i=0;i<t;i++) {
    scanf ("%d",&n);
    p=catalan(n);
    printf("%d\n", sum+1);
    sum=0; ans=0;
    if (n==0); }
	return 0; }