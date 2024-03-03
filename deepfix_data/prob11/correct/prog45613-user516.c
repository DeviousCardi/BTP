#include <stdio.h>
int sum(long int arr[],long int num,int start,int end){
    if((arr[start]==num)||(arr[end]==num))
    return 1;
    if(start<end)
    return 0;
    if(arr[start]<sum)
    return sum(arr,num,start+1,end);
    if(arr[end]<sum)
    return sum(arr,num,start,end-1); }
int main() {
    long int S;
    int N;
    scanf("%ld%ld",&N,&S);
    long int a[N];
    for(int i=0;i<N;i++)
    scanf("%ld",a[i]);
    sum(a,S,0,N-1);
    return 0; }