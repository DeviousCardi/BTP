#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int j,count=0;
    for(j=0;j<r;j++) {
       if(arr[j+l]<arr[i])
       count++; }
    return(count); }
int main() {
    int n,k,i,m,l=0;
    int getInversion(int l,int r)
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<=(n-k);i++) {
        m=getInversion(i,k);
        if(m>l)
        l=m; }
    printf("%d",n);
    return 0; }