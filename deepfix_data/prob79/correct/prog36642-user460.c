#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int A[]={1,2,3,4,5,1,6,1,2,1};
    int i,j,k;int n=10;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++)
        if(A[i]==A[j]) {
            for(k=j;k<n-1;k++)
            A[k]=A[k+1];
            n--;
            i--; } }
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
	return 0; }