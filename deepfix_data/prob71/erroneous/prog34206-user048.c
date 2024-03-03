#include <stdio.h>
int main() {
    long N,median,i,j,temp;
    long bids[100000];
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&bids[i]); }
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(bids[i]>bids[j]) {
                temp=bids[j];
                bids[j]=bids[i];
                bids[i]=temp; } }
    if(N%2==0) {
        median=(bids[N/2]+bids[(N/2)+1])/2; }
    else {
        median=bids[(N+1)/2]; }
    printf("%ld",median);
    return 0; }