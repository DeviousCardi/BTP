#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<r;i++) {
        for(j=i+1;j<r;j++) {
            if(arr[i]>arr[j])
            count++; } }
    return count; }
int main() {
    int n,i,k,x,max[100];
    scanf("%d\n%d",&n,&k);printf("%d %d ",n,k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n-k+1;i++) {
        max[i]=getInversions(i,k); }
    x=max[0];
    for(i=1;i<n-k+1;i++) {
        if(max[i]>x)
        x=max[i]; }
    printf("%d",x);
    return 0; }