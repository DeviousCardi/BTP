#include<stdio.h>
int i,sum;
int total( int N ,  int a[] , int i){
    if (i >(N-1))
    return sum = a[i]+ total(N,a,i+1) ; }
int main() {
    int i,sum = 0;
    int N;
    scanf("%d/n",&N);
    int a[N];
    for(i = 0;i<N;i++){
        scanf("%d",&a[i]);}
    printf("%d",total (N,a,0));
    return 0; }