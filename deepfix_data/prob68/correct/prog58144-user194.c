#include<stdio.h>
int prod(long int a[],long int N) {
    if(N==2)
        return a[N-2]*a[N-1];
    else {
        return a[N]*prod(a,N-1); } }
int main() {
    long int N,res;
    int i;
    long int a[1000000000];
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    res=prod(a,N);
    printf("%ld",res);
    return 0; }