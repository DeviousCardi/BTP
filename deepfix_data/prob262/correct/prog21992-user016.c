#include<stdio.h>
#include<strings.h>
void revarr(int arr[],int n) {
    if(n>0) {
        printf("%d ",arr[n]);
        revarr(arr,n-1); } }
int main() {
    int n,i,ar[10000];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    revarr(ar,n);
    return 0; }