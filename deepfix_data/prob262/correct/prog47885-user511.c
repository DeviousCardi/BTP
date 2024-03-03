#include<stdio.h>
#include<strings.h>
void fun(int arr[],int start,int end) {
    if(start>=end) return;
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=arr[start];
    fun(arr,start+1,end-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int mat[n];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    fun(mat,0,n-1);
    for(i=0;i<n;i++) {
        printf("%d ",mat[i]); }
    return 0; }