#include<stdio.h>
long long int product(int a[],int n){
    if(n==0)
    return a[0];
    return (a[n]*product(a,(n-1))); }
int main() {
    int N;
    scanf("%d",&N);
    int i;
    int array[N];
    for(i=0;i<N;i++) {
        scanf("%d",&array[i]); }
    printf("%d",product(array,N-1));
    return 0; }