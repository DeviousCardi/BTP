#include<stdio.h>
int diff(int n,int a[n]){
    if(n==1){
        return a[0]; }
    else{
        a[0]=a[0]-a[n-1];
        n=n-1;
        return diff(n,a); } }
int main() {
    int n;
    int difference;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    difference=diff(n,arr);
    printf("%d",difference);
    return 0; }