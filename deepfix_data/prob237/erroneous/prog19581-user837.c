#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count,i,k;
    count=0;
    for(i=l;i<l+r;i++) {
        for(k=i+1;k<l+r;k++) {
            if(arr[i]>arr[k]) {
                count++; } } }
    return count; }
int main() {
    int n,k,max,m;
    max=0;
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-k;i++) {
        m=getInversions(int i,int k);
        if(m>max)
        max=m; }
    printf("%d",max);
    return 0; }