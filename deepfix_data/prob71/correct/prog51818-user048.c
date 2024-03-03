#include <stdio.h>
int main() {
    int i;
    long N,median;
    long bids[100000];
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&bids[i]); }
    long left,right=N,max=0,temp,c;
    for(i=0;i<N;i++) {
        for(left=0;left<=right;left++) {
            if(bids[left]>max) {
                max=bids[left];
                c=left; } }
        printf("%d\n",max);
        temp=bids[right];
        bids[right]=max;
        bids[c]=temp;
        right=right-1; }
    for(i=0;i<N;i++) {
        printf("%ld ",bids[i]); }
    return 0; }