#include<stdio.h>
double total(long int N , int a[i] , int sum){
    if i >(N-1)
    return sum;
    sum = sum + a[i] ;
    return total(N,a[i+1],sum); } }
int main() {
    int i,sum = 0;
    long int N;
    scanf("%ld/n",&N);
    double a[N];
    for(i = 0;i<N;i++){
        scanf("%ld",&a[i]);}
    total (N,a[0],sum);
    return 0; }