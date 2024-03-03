#include <stdio.h>
#include <stdlib.h>
int main() {
    int c=0,n,i,A[n],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(j=1;j<n-1;j++) {
        if((A[j]<A[j-1])&&(A[j]<A[j+1]))
        c++; }
    if(c>0)
    printf("Yes");
    else
    printf("No");
	return 0; }