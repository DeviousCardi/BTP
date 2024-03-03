#include<stdio.h>
int i,sum;
long int total( int N ,  long int a[] , int i){
    if (i >(N-1))
    return sum;
    else return sum = a[i]+ total(N,a,i+1) ; }
int main() {
    int i,sum = 0;
    int N;
    scanf("%d/n",&N);
    long int a[N];
    for(i = 0;i<N;i++){
        scanf("%ld",&a[i]);}
    printf("%ld",total (N,a,0));
    return 0; }