#include<stdio.h>
int s=0;
int sum(int A[],int x) {
    if(x==0)
    return s;
    else {
        s=s+A[x-1];
        return sum(A,x-1); } }
int main() {
    int A[100000],n,tot=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&A[i]); }
    tot=sum(A,n);
    printf("%d",tot);
    return 0; }