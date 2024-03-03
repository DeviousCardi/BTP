#include<stdio.h>
int main() {
    int N,A[99999],n1,i,c=1,B[99999],j,max;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]); }
    B[1]=1;
    for(i=1;i<N;i++) {
        if(A[i]>A[i-1])
        B[i]=B[i-1]+1;
        else {
            max=B[0];
            for(j=0;j<i-1;j++) {
                if(max<B[j])
                max=B[j]; }
            B[i]=max+1; } }
    max=B[0];
    for(i=0;i<N;i++) {
        if(max<B[i])
        max=B[i]; }
    printf("%d",&max);
    return 0; }