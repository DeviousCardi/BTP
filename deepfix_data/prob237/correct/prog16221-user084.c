#include<stdio.h>
int arr[100];
int getInversions(int l,int k) {
    int i,j,count=0,n;
      for(i=l;i<=l+k-1;i++) {
        for(j=l+1;j<=l+k-1;j++) {
            if((i<j)&&(arr[i]>arr[j]))
            count=count+1; } }
    return count; }
int main() {
    int l,n,k,r,count=0,max=0,i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(l=1;l<=n-k;l++) {
        count=getInversions(l,k);
        if(max<count) {
        max=count; } }
    return 0; }