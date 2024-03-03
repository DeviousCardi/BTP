#include <stdio.h>
#include <stdlib.h>
int sum=0;
int catalan(int n)
{ int ans=0;
 if (n==0 || n==1)
 return 1;
 else
 { ans=2*(2*(n-1)+1)*catalan(n-1)/n+1;
 sum=sum+ans;
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