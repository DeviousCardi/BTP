#include<stdio.h>
#include<strings.h>
void revarr(long int A[], int end) {
    printf("%ld ", A[end]);
    revarr(A,end-1); }
int main() {
    long int N=0;
    long int A[1000000000];
    scanf("%ld\n", &N);
    for(int i=0; i<N; i++) {
        scanf("%ld ", &A[i]); }
    revarr(A, N-1);
    return 0; }