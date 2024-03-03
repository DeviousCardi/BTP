#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int sum=0;
int catalan(int n)
{ int ans=0, catn;
 if (n==-1)
 return 1;
 else
 { catn=catalan(n-1);
     ans=(4*n - 2)*(catn)/(n+1);
 sum=sum+ans;printf("ans is %d\n", ans);
 return ans; } }
int main() {
int i, j, t=0 ,k, n=0, nrj=0;
int a[15];
scanf ("%d",&t);
for(i=0;i<t;i++) {
    scanf ("%d",&n);
    nrj=catalan(n);
    printf("%d\n", sum);
    sum=0; }
	return 0; }