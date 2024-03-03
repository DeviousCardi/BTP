#include<stdio.h>
int diff(long int a[],long int N) {
    int d;
    d=a[N-2]-a[N-1];
    a[N-2]=d;
    if(N==2)
    return d;
    return a[N-3]-diff(a,N); }
int main() {
    long int a[100000], N,i,res;
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    res=diff(&a[0],N);
    printf("%ld",res);
    return 0; }