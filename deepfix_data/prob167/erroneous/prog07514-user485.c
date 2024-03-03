#include<stdio.h>
double sum(long int a[],long int N,long int i) {
    static long int j;
    if(j>=N)
    return i;
    else {
        i=i+a[j]+sum(a,N,i)
        j++; } }
int main() {
    long int N,k;
    scanf("%ld",&N);
    long int a[N],i=0.0;
    for(k=0;k<N;k++)
    scanf("%ld",&a[k]);
    printf("%ld",sum(a,N));
    return 0; }