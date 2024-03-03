#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int x,y,count;
    for(x=l;x<l+r;x++){
        for(y=x;y<l+r;y++){
        if(arr[y]<arr[x])
        count++; }
    return count; }
int main() {
    int n,k,i,j,value,max=0;
    scanf("%d %d",&n,&k);
    for(j=0;j<n;j++){
        scanf("%d ",&arr[j]); }
    for(i=0;i<(n-k+1);i++){
        value=getInversions(i,k);
        if(value>max)
        max=value; }
    return 0; }