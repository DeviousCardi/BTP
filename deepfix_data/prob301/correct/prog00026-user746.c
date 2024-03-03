#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,ind;
    scanf("%d\n",&n);
    int A[n], count[n];
    for(i=0;i<n;i++) {
        scanf(" %d ",&A[i]); }
    for (i=0;i<n;i++) {
        count[i]=0;
        for(j=i;j<n;j++) {
            if(A[i]==A[j]) {
                count[i]++; } } }
    int max = count[0];
    for(i=0;i<n;i++) {
      if (count[i]>=max)
      {max=count[i];
      ind=i;} }
    int mode= A[ind];
    printf("%d",mode);
	return 0; }