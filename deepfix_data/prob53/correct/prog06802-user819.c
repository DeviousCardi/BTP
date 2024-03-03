#include<stdio.h>
int func(int arr[],int size,int beg) {
    if (beg==size){
        return(arr[beg]); }
    else{
        arr[beg+1]=arr[beg]-arr[beg+1];
        return func(arr,size,beg+1); } }
int main() {
    long long int N;int arr[100000];
    scanf("%d\n",&N);
    for(long long int i=0;i<N;i++){
        scanf("%d ",&arr[i]); }
    arr[N]=0;
    int a=func(arr,N,0);
    printf("%d",a);
    return 0; }