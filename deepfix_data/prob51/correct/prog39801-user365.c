#include <stdio.h>
void selectsort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; } } } }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    selectsort(arr,n);
    printf("%d",arr[n-k]); }