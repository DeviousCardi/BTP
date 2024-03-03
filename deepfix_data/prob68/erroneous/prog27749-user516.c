#include<stdio.h>
long int product(long int arr[],long int n,long int res){
    if(n==1)
    return arr[n-1];
    else
    return product(arr,n-2,arr[n-1]*res) }
int main() {
    long int N,i;
    scanf("%ld",&N);
    long int a[N];
    for(i=0;i<N;i++)
    scanf("%ld",&a[i]);
    product(a,N,1);
    return 0; }