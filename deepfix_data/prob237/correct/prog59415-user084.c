#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0,n;
    for(i=l;i<=l+r-1;i++) {
        for(j=l+1;j<=l+r-1;j++) {
            if((i<j)&&(arr[i]>arr[j]))
            count=count+1; } }
    return count; }
int main() {
    int l,n,k,r,count=0,max=0,i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(l=1;l<=k+l-1;l++) {
        count=getInversions(l,k);
        if(max<count) {
        max=count; } }
    return 0; }