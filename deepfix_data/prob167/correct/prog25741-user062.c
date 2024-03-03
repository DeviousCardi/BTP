#include<stdio.h>
int i;
int total( int N ,  int a[i] , int sum){
    if (i >(N-1))
    return sum;
    sum = sum + a[i] ;
    return total(N,a[i+1],sum); }
int main() {
    int i,sum = 0;
    int N;
    scanf("%d/n",&N);
    int a[N];
    for(i = 0;i<N;i++){
        scanf("%d",&a[i]);}
    total (N,a,sum);
    printf("%d",sum);
    return 0; }