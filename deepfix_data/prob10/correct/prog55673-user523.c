#include<stdio.h>
int main() {
    int N,max,y,j,A[25],count,i;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]); }
    max=1;
    for(i=0;i<N-1;i++) {
        count=1;
        for(j=i+1;j<N;j++) {
            if(A[i]<A[j]) {
                count++; } }
        if(count>=max) {
            max=count; } }
    printf("%d",max);
    return 0; }