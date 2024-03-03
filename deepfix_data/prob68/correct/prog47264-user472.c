#include<stdio.h>
int product(int A[],int size,int index) {
        if(index==0)
        return 1;
        return A[index]*product(A,size,index-1); }
int main() {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d ",&A[i]); }
    double ans=product(A,N,N);
    printf("%d",ans);
    return 0; }