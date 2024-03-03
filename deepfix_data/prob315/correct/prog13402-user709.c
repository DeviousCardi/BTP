#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,A[1000],n,count;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&A[i]); }
    for(i=0;i<n;i++)
    {   count=0;
        for(j=i;j<n;j++) {
          if(A[i]>A[j])
          count++; }
        printf("%d ",count); }
	return 0; }