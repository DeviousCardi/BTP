#include <stdio.h>
int sum(int arr[],int n) {
    int sum=0;
    for(int i=0;i<n+1;i++)
        sum=sum+arr[i];
    return sum; }
int f(int arr[],int n,int a1[],int a2[],int i,int j,int k) {
    if(i!=n-1)
        return f(arr,n,a1,a2,i+1,j+1,k) || f(arr,n,a2,a1,i+1,k+1,j);
    if(i==n) {
        if(sum(a1,n)==sum(a2,n))
            return 1;
        else
            return 0; } }
int main() {
    return 0; }