#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0,k,n,t,j;
    scanf("%d\n",&n);
    int A[i];
    for(i=0;i<n;i++) {
        scanf("%d\n",&A[i]); }
        if(n==1) {
        printf("Yes\n");
        return 0; }
        else
        scanf("%d\n",&t);
        for(j=0;j<=t;j++) {
        scanf("%d\n",&k);
        if(k==0) {
        if(A[0]<A[1])
        printf("Yes\n");
        else
        printf("No\n"); }
        if(k==n-1) {
        if(A[n-1]<A[n])
        printf("Yes\n");
        else
        printf("No\n"); }
        else if((k>0)&&(k<n-1)) {
        if(A[k]>A[k-1]&&A[k]>A[k+1])
        printf("Yes\n");
        else
        printf("No\n");
    }}
	return 0; }