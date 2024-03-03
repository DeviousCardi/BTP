#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,n,m,k;
     int A[20];
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         scanf("%d",&A[i]); }
     scanf("%d",&m);
     for(j=0;j<m;j++) {
         scanf("%d",&k);
         if(k==0)
         {if (A[k]>A[k+1])
         printf("Yes\n");
         else printf("No\n");}
         else if(k==n)
         {if(A[k]>A[k-1])
         printf("Yes");
         else printf("No"); }
         else
         if((A[k]>A[k-1])&&(A[k]>A[k+1])) {
         printf("Yes\n"); }
         else
         printf("No\n"); }
	return 0; }