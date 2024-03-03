#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int count[k+1];
    for(int i=0;i<k+1;i++)
    count[i]=0;
    for(int i=0;i<n;i++) {
        count[arr[i]]+=1; } }