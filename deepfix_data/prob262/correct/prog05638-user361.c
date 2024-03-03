#include<stdio.h>
#include<strings.h>
void reverse(int arr[],int n,int i){
    int temp;
    if (i==n/2){
        return ; }
    if(i<n/2){
        temp=arr[i];
        arr[i]=arr[n-1];
        arr[n]=temp;
        reverse(arr,n-1,i+1); } }
int main() {
    return 0; }