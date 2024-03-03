#include<stdio.h>
int arr[100],c=0;
int getInversions(int l,int r) {
   for(int i=l;i<=l+r-1;i++) {
       for(int j=i+1;j<=l+r-1;j++) {
           if(arr[i]>arr[j])
           c=c+1; } }
   return c; }
int main() {
    int n,x;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n],a[n-k];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int j=0;j<n-k;j++) {
        a[j]=getInversions(j,k); }
    for(int y=0;y<n-k;y++) {
        for(int m=y+1;m<n-k;m++) {
            if(a[y]<a[m]) {
                x=a[y];
                a[y]=a[m];
                a[m]=x; } } }
    printf("%d",a[1]);
    return 0; }