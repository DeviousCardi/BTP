#include <stdio.h>
int check(int arr[],int n,int s,int sum,int j){
    if(j<n){
        if(sum==s){
            return 1; }
        else{
            return check(arr,n,s,sum+arr[j],j+1);
            return check(arr,n,s,sum,j+1); } }
    return 0; }
int main() {
    int n,s,x;
    scanf("%d %d\n",&n,&s);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    x=check(arr,n,s,0,0);
    if(x==1){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }