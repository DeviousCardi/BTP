#include<stdio.h>
long int func(long int arr[],long int size,long int beg) {
    if (beg==size){
        return(arr[beg]); }
    else{
        arr[beg+1]=arr[beg]-arr[beg+1];
        return func(arr,size,beg+1); } }
int main() {
    long int N;long int arr[100000];
    scanf("%ld\n",&N);
    for( long int i=0;i<N;i++){
        scanf("%ld ",&arr[i]); }
    arr[N]=0;
    long int a=func(arr,N,0);
    printf("%ld",a);
    return 0; }