#include <stdio.h>
#include <stdlib.h>
 int cat(int n)
   { if(n==0||n==1)
       return 1;
     else return cat(n-1)*2*(2*n-1)/(n+1); }
int main() {
    int t,A[100],sum[100],i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&A[i]); }
   printf("%d",cat(t));
	return 0; }