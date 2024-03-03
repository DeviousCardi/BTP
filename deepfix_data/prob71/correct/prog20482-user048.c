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
                bids[i]=temp; } } }
    for(i=0;i<N;i++) {
        printf("%d",bids[i]); }
    return 0; }