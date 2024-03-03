#include<stdio.h>
int pr(int p,int n,int num[]) {
    p=p*num[n-1];
    if(n==0) {
        return p; }
    else {
        return pr(p,n-1,num); } }
int main() {
    int N;
    scanf("%d",&N);
    int num[N-1];
    int i,product;
    for(i=0; i<N; i++) {
        scanf("%d",&num[i]);
        scanf(" "); }
    product=pr(num[N-1],N-1,num);
    printf("%d",product);
    return 0; }