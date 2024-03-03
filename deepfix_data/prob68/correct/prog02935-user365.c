#include<stdio.h>
int prod(int arr[],int start,int size){
    if(start==size-1)return arr[start];
    else return arr[start]*prod(arr,start+1,size ); }
int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    scanf("%d",&num[i]);
    printf("%d",prod(num,0,n));
    return 0; }