#include<stdio.h>
int arr[100],i,j,n,k,count=0;
int getInversions(int l,int r) {
    for(i=l;i<r;i++){
        for(j=i+1;j<r;j++){
            if(arr[i]>arr[j]){
                count=count+1; } } }
return (count); }
int main() {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=1;i<=i+k-1&&i+k-1<n;i++){
        count=getInversions(i,i+k-1); }
    return 0; }