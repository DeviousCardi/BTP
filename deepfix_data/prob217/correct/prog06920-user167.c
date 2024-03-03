#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l;
  int  count=0;
    scanf("%d",&n);
    scanf("%d",k);
	int A[n];
        for(i=0; i<n; i++){
            scanf("%d",&A[i]) ; }
        if(A[j]+A[l]==k) {
        for(j=0; j<n; j++){
            scanf("%d",&A[j]); }
        for(l=k; l<k-n; l++){
            scanf("%d",&A[l]); }
        printf("(%d,%d)",A[j],A[l]); }
          count++;
	return 0; }