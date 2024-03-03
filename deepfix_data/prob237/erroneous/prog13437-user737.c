#include<stdio.h>
int arr[100];
int getInversions(int l,int r) { }
int main() {
    int n,k,i,j,max;
    scanf("%d%d",&n,&k);
    int arr[n],count[n-k+1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<(n-k+1);i++) {
        count[i]=0;
        for(j=i;j<(i+k);j++)
        if(arr[i]<arr[j])
        count[i]++; }
    for(i=0;i<(n-k);i++) {
        if(count[i]>cont[i+1])
        max=count[i];
        else max=count[i+1]; }
    pirntf("%d",max);
    return 0; }