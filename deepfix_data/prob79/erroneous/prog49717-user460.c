#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int A[]={1,2,3,4,5,1,6,1,2};
    int i;int n=strlen(A);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++)
        if(A[i]==A[j]) {
            for(k=j;k<n;k++)
            A[k]=A[k+1];
            n--;
            i--; } }
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
	return 0; }