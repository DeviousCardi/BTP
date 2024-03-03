#include<stdio.h>
#include<strings.h>
int rev(int a[],int size,int start,int end) {
    int j;
    if(size==1) {
        return a[start]; }
     if(start==end||(end-start==1)) {
       return a[end]; }
     else {
       j=a[start];
       a[start]=a[end];
       a[end]=j;
       return rev(a,size,start+1,end-1); } }
int main() {
    int n,i,c=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        c++; }
    rev(a,n,k,c-1);
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }