#include<stdio.h>
int main() {
    int A[20],MaxTill[20],N,i,j,max,count=1;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]); }
    max=1;
    for(i=0;i<N-1;i++) {
        for(j=i+1;j<N;j++) {
            if(A[i]<A[j]) {
                count++; } }
        if(count>=max) {
            max=count; } }
    printf("%d",max);
    return 0; }