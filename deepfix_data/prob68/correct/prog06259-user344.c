#include<stdio.h>
long long int prd(long int n[], long int N, long int index, long long int product){
    if(index==N) return product;
    return prd(n, N, index+1, product*n[index]); }
int main() {
    long int N, i;
    scanf("%ld\n", &N);
    long int n[N];
    for(i=0; i<N; i++){
        scanf("%ld", &n[i]); }
    long long int prod=prd(n, N, 0, 1);
    printf("%lld", prod);
    return 0; }