#include<stdio.h>
int diff(long int a[],long int N) {
    long int d,i;
    d=0;
    for(i=0;i<(N-1);i++) {
     d=a[i]-a[i+1];
     a[i+1]=d; }
    return d; }
int main() {
    long int a[100000], N,i,res;
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    res=diff(&a[0],N);
    printf("%ld",res);
    return 0; }