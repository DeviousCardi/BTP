#include<stdio.h>
int max(int MaxTill[], int j) {
    int max=MaxTill[0];
    for(int i=0; i<=j; i++) {
        if(MaxTill[i]>max) {
            max = MaxTill[i]; } }
    return max+1; }
int main() {
    int N=0, A[19];
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]); }
    int MaxTill[19];
    for(int i=0; i<N; i++) {
        MaxTill[i] = max(MaxTill,i-1); }
    int maxlen=MaxTill[0];
    for(int i=1; i<N; i++) {
        if(maxlen<MaxTill[i]) {
            maxlen=MaxTill[i]; } }
    for(int i=0; i<N; i++) {
        printf("%d ", MaxTill[i]); }
    printf("\n%d", maxlen);
    return 0; }