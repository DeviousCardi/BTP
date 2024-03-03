#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<=l+r-1;i++) {
        for(j=i+1;j<=l+r-1;j++) {
            if(arr[i]>arr[j]) {
                count=count+1; } } }
    return count; }
int main() {
    int n,i,k,x,max=0;
    scanf("%d%d",&n,&k);
    int b[103];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;k+i<=n;i++) {
        x=getInversions(i,k);
        if(x>max)
        max=x; }
    printf("%d",max);
    return 0; }