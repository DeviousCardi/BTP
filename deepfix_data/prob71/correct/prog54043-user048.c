#include <stdio.h>
int main() {
    long N,i,j,temp;
    float median;
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
        printf("%ld",bids[i]); }
    return 0; }