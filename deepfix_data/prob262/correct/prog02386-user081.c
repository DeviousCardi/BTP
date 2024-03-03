#include<stdio.h>
#include<strings.h>
void revarr(long int A[], int end) {
    if(end<0) {
        return; }
    printf("%ld ", A[end]);
    revarr(A,end-1);
    return; }
int main() {
    long int N=0;
    long int A[1000000000];
    scanf("%ld\n", &N);
    for(int i=0; i<N; i++) {
        scanf("%ld ", &A[i]); }
    revarr(A, N);
    return 0; }