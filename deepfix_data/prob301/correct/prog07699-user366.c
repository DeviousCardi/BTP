#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
    int A[n],count[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    int k,c;
    for(j=0;j<n;j++) {
        c=1;
        for(k=j+1;k<n;k++) {
            if(A[j]==A[k])
            c++; }
        count[j]=c; }
    int z=0,x,max=count[0];
    for(x=0;x<n;x++) {
        if(count[x+1]>=max)
        z++; }
        printf("%d",A[z+1]); }