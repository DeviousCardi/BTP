#include<stdio.h>
long int Diff(long int A[],long int N,long int i)
{   if(i==0)
    return (A[i]-Diff(A,N,i+1));
    else if(i==N-1)
    return A[i];
    else
    return (A[i]+Diff(A,N,i+1)); }
int main() {
    long int A[1000000000],N,diff,i;
    scanf("%ld\n",&N);
    for(i=0;i<N;i++) {
        scanf("%ld ",&A[i]); }
    diff=Diff(A,N,0);
    printf("%ld",diff);
    return 0; }