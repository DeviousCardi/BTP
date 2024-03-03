#include <stdio.h>
#include <stdlib.h>
int main() {
    int c=0,n,i,j;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(j=1;j<n-1;j++) {
        if((A[j]<A[j-1])&&(A[j]<A[j+1]))
        c++; }
    if(A[0]<A[1])
    c++;
    if(A[n]<A[n-1])
    c++;
    if(c>0)
    printf("Yes");
    else
    printf("No");
	return 0; }