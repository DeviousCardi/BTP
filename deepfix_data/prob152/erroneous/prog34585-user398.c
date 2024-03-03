#include <stdio.h>
int sum(int arr[],int n) {
    int sum=0;
    for(int i=0;i<n+1;i++)
        sum=sum+arr[i];
    return sum; }
int f(int arr[],int n,int a1[],int a2[],int i,int j,int k) {
    a1[j]=arr[i];
    if(i!=n-1)
        return f(arr,n,a1,a2,i+1,j+1,k) || f(arr,n,a2,a1,i+1,k+1,j);
    if(i==n) {
        if(sum(a1,n)==sum(a2,n))
            return 1;
        else
            return 0; } }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i])
    int a1[n+1];
    int a2[n+1];
    for(int i=0;i<n+1;i++) {
        a1[i]=0;
        a2[i]=0; }
    a1[0]=arr[0];
    int result=f(arr,n,a1,a2,1,1,1)||f(arr,n,a2,a1,1,1,1);
    return 0; }