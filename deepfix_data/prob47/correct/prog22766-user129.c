#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int ans=0;
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
int i,k,j,t=0, n=0,p=0,l;
scanf ("%d",&t);
int A[t-1];
for(i=0;i<t;i++)
 scanf("%d\n",&A[i]); {
    for(k=0;k<t;k++) {
        for(l=1;l<=A[k];l++) {
                p=p+catalan(l); }
            printf("%d\n", p);
               p=0; } }
	return 0; }