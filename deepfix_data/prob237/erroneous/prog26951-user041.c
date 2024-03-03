#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
     int i,j,count=0;
     for(i=l;i<(l+r);i++) {
        for(j=i+1;j<(l+r);j++) {
            if(a[i]>a[j])
            count=count+1; } }
     return count; }
int main() {
    int n,k,i,l=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&n);
    for(j=0;j<(n-k+1);j++) {
        c[j]=getInversions(j,j+k); }
     for(i=0;i<(n-k+1);i++) {
        if(c[k]>=c[l])
        l=k; }
    printf("%d",c[l]);
    return 0; }