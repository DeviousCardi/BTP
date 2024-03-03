#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,count=0,sum=0;
    int A[n];
    for(i=0;i<n;i++) {
    scanf("%d",&A[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(A[i]>A[j])
            count++; }
        printf("%d",count);
        sum=sum+count; }
    printf("%d\n",sum);
	return 0; }