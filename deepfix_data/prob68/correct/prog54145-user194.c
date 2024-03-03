#include<stdio.h>
int prod(double a[],long int N) {
    if(N==2)
        return a[N-2]*a[N-1];
    else {
        return a[N-1]*prod(a,N-1); } }
int main() {
    long int N;
    int i;
    double res,a[1000000];
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%lf",&a[i]); }
    res=prod(a,N);
    printf("%.0lf",res);
    return 0; }