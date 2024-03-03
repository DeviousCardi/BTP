#include<stdio.h>
int i,j,count;
int arr[100];
int getInversions(int l,int r) {
      count=0;
     for (i=l;i<l+r;i++) {
        for (j=i+1;j<l+r;j++) {
            if (i<j && arr[i]>arr[j])
               count=count+1; } }
         printf("%d ",count);
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
        printf("t ");
        i++; }
    return 0; }