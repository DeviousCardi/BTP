#include <stdio.h>
int group(int n,int a[n],int start,int end){
    int p=0;
    if(start<end){
        if(a[start]<a[end]){
            a[start]=a[start]+a[start+1];
            start=start+1;
            return group(n,a,start,end); }
        if(a[start]>a[end]){
            a[end]=a[end]+a[end-1];
            end=end-1;
            return group(n,a,start,end); } }
    if(start==end){
        if(a[start]==a[end])
        p=p+1; }
    return p; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b=group(n,a,0,n-1);
    printf("%d",b);
    return 0; }