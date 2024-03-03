#include<stdio.h>
int prod(long double a[],long int N) {
    if(N==2)
        return a[N-2]*a[N-1];
    else {
        return a[N-1]*prod(a,N-1); } }
int main() {
    long int N;
    int i;
    scanf("%ld",&N);
    long double res,a[N+4];
    for(i=0;i<N;i++) {
        scanf("%Lf",&a[i]); }
    res=prod(a,N);
    printf("%.0Lf",res);
    return 0; }