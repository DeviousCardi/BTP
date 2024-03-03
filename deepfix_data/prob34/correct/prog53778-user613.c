#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,k,n,m;
     int A[20];
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         scanf("%d",&A[i]); }
     scanf("%d",&m);
     for(j=0;j<m;j++) {
         if((A[i]>A[i-1])&&(A[i]>A[i+1]))
         {i++;
         printf("Yes");
         break;}
         else
         printf("No"); }
	return 0; }