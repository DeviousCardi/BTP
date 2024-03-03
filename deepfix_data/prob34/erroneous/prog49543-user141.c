#include <stdio.h>
#include <stdlib.h>
int main() {
     int n;
     scanf("%d\n",&n);
     int A[n];
     int i;
     for (i=0;i<n;i++) {
         scanf("%d\n",&A[i]); }
     int t;
     scanf("%d\n",&t);
     int B[t];
     int j;
     for (j=0;j<t;j++) {
         scanf("%d\n",&B[j]); }
     int k,l;
     for (l=0;l<t;l++) {
         k=B[l];
         if (((k>0)&&((k<t-1))) {
             if ((A[k]>A[k-1])&&(A[k]>A[k+1]))
                printf ("Yes\n");
            else
                printf ("No\n"); }
        else if (k==0) {
            if (A[0]>A[1])
                printf ("Yes\n");
            else
                printf ("No\n"); }
        else {
            if (A[k]>A[k-1])
                printf ("Yes\n");
            else
                printf ("No\n"); } }
	return 0; }