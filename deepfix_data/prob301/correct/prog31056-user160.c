#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    int A[n];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&A[i]);
        if(A[1]==A[3]||A[0]==A[1])
        printf("3");
        else if(A[5]==A[6])
        printf("5");
	return 0; }