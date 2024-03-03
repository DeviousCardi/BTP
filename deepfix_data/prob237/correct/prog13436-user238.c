#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<l+r-2;i++) {
        for(int j=i+1;j<l+r;j++) {
            if(arr[j]<arr[i])
            count++; } }
    return count; }
int main() {
    int n,k,max=0,no;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int l=0;l<=n-k;l++) {
        no=getInversions(l,k);
        printf("%d",no);
        if(no>max)
        max=no; }
    printf("%d",max);
    return 0; }