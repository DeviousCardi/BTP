#include<stdio.h>
int main() {
    int N,A[1000],n1,n2,i,c=0;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]); }
    n1=A[0];
    for(i=0;i<N;i++) {
        if(A[i]>n1) {
            n1=A[i];
            c++; } }
    printf("%d",&c);
    return 0; }