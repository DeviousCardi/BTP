#include<stdio.h>
int sum(int arr[],int n){
    int s=0;
     s+=arr[n]+arr[n-1];
    if(n<=1){ return s;}
     return sum(arr,n-1); }
int main() {
    int N,a[100000],m,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]); }
    m=sum(a,N);
    printf("%d",m);
    return 0; }