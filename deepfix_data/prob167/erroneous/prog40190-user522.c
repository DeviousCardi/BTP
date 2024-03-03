#include<stdio.h>
int sum=0;
int sum(int A[];int x) {
    if(x==0)
    return 0;
    else {
        sum=sum+A[x-1];
        return sum(A,x-1); } }
int main() {
    int A[100000],n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    sum(A,n);
    scanf("%d",&sum);
    return 0; }