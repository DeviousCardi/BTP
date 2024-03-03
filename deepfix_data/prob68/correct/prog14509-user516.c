#include<stdio.h>
long int product(long int arr[],long int n,long int res){
    if(n==1)
    return arr[n-1];
    else
    return product(arr,n-2,arr[n-1]*res); }
int main() {
    long int N,i,p;
    scanf("%ld",&N);
    long int a[N];
    for(i=0;i<N;i++)
    scanf("%ld",&a[i]);
    p=product(a,N,1);
    printf("%ld",p);
    return 0; }