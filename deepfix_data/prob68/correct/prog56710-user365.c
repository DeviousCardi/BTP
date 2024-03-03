#include<stdio.h>
long prod(int arr[],int start,int end){
if(start==end)return arr[end];
else return arr[start]*prod(arr,start+1,end); }
int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    scanf("%d",&num[i]);
    printf("%d",prod(num,0,n-1));
    return 0; }