#include<stdio.h>
long mult(int ar[],long n){
    if(n==1){
        return ar[0]; }
    else return (ar[n-1]*mult(ar,n-1)); }
int main() {
    long n,i,prod;
    scanf("%ld",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d ",&ar[i]); }
    prod=mult(ar,n);
    printf("%ld",prod);
    return 0; }