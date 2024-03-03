#include<stdio.h>
#include<strings.h>
void revarr(long int A[], int start, int end) {
    if(start==end || start==end-1) {
        return; }
    int temp = A[start];
    A[start] = A[end];
    A[end] = temp;
    revarr(A, start+1, end-1); }
int main() {
    long int N=0;
    long int A[1000000000];
    scanf("%ld\n", &N);
    for(int i=0; i<N; i++) {
        scanf("%ld ", &A[i]); }
    revarr(A, 0, N-1);
    for(int i=0; i<N; i++) {
        printf("%ld ", A[i]); }
    return 0; }