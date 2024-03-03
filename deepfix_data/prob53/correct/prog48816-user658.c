#include<stdio.h>
int Diff( int A[ ], int N, int i)
{   if(i==N-1)
    return A[i];
    else if(i==0)
    return (A[i]-Diff(A,N,i+1));
    else
    return (A[i]+Diff(A,N,i+1)); }
int main() {
    int A[100000],N,diff,i;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]); }
    diff=Diff(A,N,0);
    printf("%d",diff);
    return 0; }