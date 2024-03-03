#include<stdio.h>
long int dosum(long int a[],long int N,long int i) {
    long int sum;
    if(i<N) {
        sum=a[i]+dosum(a,N,i);
        i++; }
    else
    return sum; }
int main() {
    long int N,k;
    scanf("%ld",&N);
    long int a[N],i=0;
    for(k=0;k<N;k++)
    scanf("%ld",&a[k]);
    printf("%ld",dosum(a,N,i));
    return 0; }