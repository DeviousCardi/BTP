#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,i;
    int A[n];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&A[i]);
    for(t=0;t<=10;t++){
        scanf("%d",&t);
        if(A[1]==A[3])
        printf("3");
        else if(A[1]==A[2])
        printf("3"); }
	return 0; }