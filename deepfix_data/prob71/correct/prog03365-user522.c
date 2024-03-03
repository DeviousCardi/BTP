#include <stdio.h>
int main() {
    int A[100000],n,temp;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    scanf("%d ",&A[i]);
    for(int j=0;j<n;j++)
    for(int i=0;i<n-1;i++) {
        if(A[i]>A[i+1]) {
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp; } }
    for(int i=0;i<n;i++)
    printf("%d ",A[i]);
    if(n%2==0) {
        scanf("%d",(A[n/2]+A[n/2+1])/2); }
    else
    printf("%d",A[(n+1)/2]);
    return 0; }