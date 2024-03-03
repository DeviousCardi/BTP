#include<stdio.h>
  int arr[];
  int n;
 int rec(int arr[n]);
 int main() {
    int n,i,t=0,f;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    f=arr[0]-arr[1];
     for(i=2;i<n;i++){
         t=f;
         t=(t-arr[i]); }
     printf("%d\n",t);
    return 0; }
int rec(int arr[n]){
    if(n==1){
        return arr[0]; }
    else if(n==2) {
        return arr[0]-arr[1]; }
    else {
        return  arr[n-2]-arr[n-1];} }