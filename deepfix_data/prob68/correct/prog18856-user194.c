#include<stdio.h>
long int prod(long int a[],long int N) {
    if(N==2)
        return a[N-2]*a[N-1];
    else {
        return a[N-1]*prod(a,N-1); } }
int main() {
    long int N;
    int i;
    scanf("%ld",&N);
    long int res,a[N];
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    res=prod(a,N);
    printf("%ld",res);
    return 0; }