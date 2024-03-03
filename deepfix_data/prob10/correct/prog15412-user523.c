#include<stdio.h>
int A[25],N,count,i;
int main() {
    int N,max,y,j;
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