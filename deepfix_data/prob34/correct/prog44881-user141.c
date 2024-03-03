#include <stdio.h>
#include <stdlib.h>
int main() {
     int n;
     scanf("%d\n",&n);
     int A[n];
     int i;
     for (i=0;i<n;i++) {
         scanf("%d\n",A[i]); }
     int t;
     scanf("%d\n",&t);
     int B[t];
     int j;
     for (j=0;j<n;j++) {
         scanf("%d\n",&B[j]); }
     int k,l;
     for (l=0;l<t;l++) {
         k=B[l];
         if ((A[k]>A[k-1])&&(A[k]>A[k+1])) printf ("Yes");
         else printf ("No"); }
	return 0; }