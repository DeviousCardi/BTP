#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,A[1000],n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
          if(A[i]>A[j])
          count++; } }
     printf("%d ",count);
	return 0; }