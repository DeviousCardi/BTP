#include <stdio.h>
int main() {
    int i;
    long N,median;
    long bids[100000];
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&bids[i]); }
    long left,right=N,temp,c,max=0;
    for(i=0;i<N-1;i++) {
        for(left=0;left<=right;left++) {
            if(bids[left]>max) {
                max=bids[left];
                c=left; } }
        printf("%ld\n",bids[right-1]);
        temp=bids[right];
        bids[right]=max;
        bids[c]=temp;
        right=right-1;
        max=0; }
    for(i=0;i<N;i++) {
        printf("%ld ",bids[i]); }
    if(N%2==0) {
        median=(bids[N/2]+bids[(N/2)+1])/2; }
    else {
        median=bids[(N+1)/2]; }
    printf("\n%ld",median);
    return 0; }