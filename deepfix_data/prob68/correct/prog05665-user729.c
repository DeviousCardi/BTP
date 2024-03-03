#include<stdio.h>
int pr(int n,int num[]) {
    int p=p*num[n]*num[n-1];
    if(n==0) {
        return p; }
    else {
        return pr(n-2,num); } }
int main() {
    int N;
    scanf("%d",&N);
    int num[N];
    int i,product;
    for(i=0; i<N; i++) {
        scanf("%d",&num[i]);
        scanf(" "); }
    product=pr(N,num);
    printf("%d",product);
    return 0; }