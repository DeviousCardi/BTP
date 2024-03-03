#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
    int A[n],count[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    int k,c;
    for(j=0;j<n;j++)
    {c=1;
        for(k=j+1;j<n;j++)
        {if(A[j]==A[k])
        c++;}
        count[j]==c; }
	return 0; }