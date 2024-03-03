#include<stdio.h>
#include<strings.h>
int reverse(int arr[],int n,int i){
    int temp;
    if (i==n/2){
        return arr[i]; }
    if(i<n/2){
        temp=arr[i];
        arr[i]=arr[n-1];
        arr[n]=temp;
  return reverse(arr,n-1,i+1); } }
int main() {
int n,k,rev,i;
scanf("%d",&n);
int arr[n],arrr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]); }
rev=reverse(arr,n-1,0);
for(i=0,k=0;i<n,k<n;i++,k++){
    arrr[k]=arr[i]; }
for(i=0;i<n;i++){
    printf("%d",arrr[i]); }
    return 0; }