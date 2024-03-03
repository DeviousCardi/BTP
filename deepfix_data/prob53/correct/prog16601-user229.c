#include<stdio.h>
long difference(long a[],long n) {
    long i;
    if(n==1) return a[0];
    a[0]=a[0]-a[1];
    for (i=1;i<(n-1);i++){
        a[i]=a[i+1]; }
    return difference(a,n-1); }
int main() {
    long i;
    long N;
    scanf("%ld",&N);
    long array[N];
    for(i=0;i<N;i++){
        scanf("%ld",&array[i]); }
    printf("%ld",difference(array,N));
    return 0; }