#include<stdio.h>
int i,j,k,count;
int arr[100];
int getInversions(int l,int r) {
      count=0;
     for (k=l;k<l+r;k++) {
        for (j=l;j<l+r;j++) {
            if (k<j && arr[k]>arr[j])
               count=count+1; } }
return count; }
int main() {
    int n;
       scanf("%d",&n);
    int k;
       scanf("%d",&k);
    int inv[n-k+1];
     for (i=0;i<n;i++) {
         scanf("%d",&arr[i]); }
     i=0;
     while (i<(n-k+1)) {
        inv[i]=getInversions(i,k);
        i++; }
     int max=inv[0];
     for (i=0;i<(n-k+1);i++) {
         if (max<inv[i])
             max=inv[i]; }
         printf("%d ",max);
    return 0; }