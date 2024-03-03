#include <stdio.h>
int sum(int N,long int arr[N],long int num,int start,int end){
    if((arr[start]==num)||(arr[end]==num))
    return 1;
    if(arr[start]<sum)
    return sum(N,arr,num,start+1,end);
    if(arr[end]<sum)
    return sum(N,arr,num,start,end-1); }
int main() {
    long int S;
    int N;
    scanf("%d%ld",&N,&S);
    long int a[N];
    for(int i=0;i<N;i++)
    scanf("%ld",&a[i]);
    sum(N,a,S,0,N-1);
    return 0; }