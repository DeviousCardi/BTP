#include <stdio.h>
void swap(int array[100000],int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp; }
int main() {
    int n,k,temp;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    for(int i=0;i<(n-1);i++){
        if(arr[i+1]>arr[i]){
            swap(arr,arr[i],arr[i+1]); } }
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    return 0; }