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
    if(j==0) {
    for(k=j+1;k<n;k++)
        {if(A[j]==A[k])
        c++;}
        count[j]=c; }
    if(j>0) {
    if(A[j]!=A[j-1])
        for(k=j+1;k<n;k++)
        {if(A[j]==A[k])
        c++;}
        count[j]=c; } }
    int x;
    for(x=0;x<n;x++)
        printf("%d",count[x]);
	return 0; }