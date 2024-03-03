#include <stdio.h>
void sort(int a[],int,int);
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    scanf("%d",&arr[i]);
    int start=0;
    sort(arr,N,start); }
void sort(int a[],int n,int s) {
    if(s==n-1) {
        return; }
    for(int i=s+1;i<n;i++) {
        if(a[i]>a[s]) {
            int t=a[i];
            a[i]=a[s];
            a[s]=t; } }
    sort(a,n,s+1); }