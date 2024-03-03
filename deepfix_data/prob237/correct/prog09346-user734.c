#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=0;i<r-1;i++) {
        for(j=i+1;j<r;j++) {
            if(arr[l+i]>arr[l+j]) {
                count=count+1; } } }
    return count; }
int main() {
    int i,temp,max,k,n;
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max=getInversions(0,k-1);
    for(i=1;i<n-k+1;i++) {
        temp=getInversions(i,i+k-1);
        if(max<temp) {
            max=temp; } }
    printf("%d",max);
    return 0; }