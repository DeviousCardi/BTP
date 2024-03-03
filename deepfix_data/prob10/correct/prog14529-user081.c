#include<stdio.h>
int max(int MaxTill[], int j) {
    int max=MaxTill[0]+1;
    for(int i=0; i<=j; i++) {
        if(MaxTill[i]+1>max) {
            max = MaxTill[i]+1; } }
    return max; }
int main() {
    int N=0, A[19];
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]); }
    int MaxTill[19], flag=0;
    if(A[1]<A[0]) {
        MaxTill[0] = 0; }
    else
        MaxTill[0] = 1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(A[i]>A[j]) {
                flag=1;
                MaxTill[i] = max(MaxTill,j); }
            if(j==(i-1) && flag!=1) {
                MaxTill[i]=1; } } }
    int maxlen=MaxTill[0];
    for(int i=1; i<N; i++) {
        if(maxlen<MaxTill[i]) {
            maxlen=MaxTill[i]; } }
    printf("%d", maxlen);
    return 0; }