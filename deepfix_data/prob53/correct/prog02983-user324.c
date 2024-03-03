#include<stdio.h>
  int arr[];
  int n;
 int rec(int arr[n]);
 int main() {
    int n,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
     rec(arr[n]);
    return 0; }
int rec(int arr[n]){
    if(n==1){
        return arr[0]; }
    else if(n==2) {
        return arr[0]-arr[1]; }
    else {
        return  arr[n-2]-arr[n-1];} }