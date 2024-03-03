#include<stdio.h>
int max(int MaxTill[], int j) {
    int max=MaxTill[0];
    for(int i=0; i<=j; i++) {
        if(MaxTill[i]>max) {
            max = MaxTill[i]; } }
    return max+1; }
int main() {
    int N=0, A[100];
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]); }
    int MaxTill[100], flag=0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(A[j]<A[i]) {
                flag=1;
                MaxTill[i] = (max(MaxTill, j)); }
            if(j==(i-1) && flag!=1) {
                MaxTill[i] = 1; } } }
    int maxlen=MaxTill[0];
    for(int i=1; i<N; i++) {
        if(maxlen<MaxTill[i]) {
            maxlen=MaxTill[i]; } }
    printf("%d", maxlen);
    return 0; }