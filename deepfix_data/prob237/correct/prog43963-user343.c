#include<stdio.h>
int i,j,inv;
int arr[100];
int getInversions(int l,int r) {
     for (i=l;i<l+r;i++) {
         inv=0;
        for (j=l;j<l+r;j++) {
            if (i<j && arr[i]>arr[j])
               inv++; } }
return inv; }
int main() {
    int n;
       scanf("%d",&n);
    int k;
       scanf("%d",&k);
     for (i=0;i<n;i++) {
         scanf("%d",&arr[i]); }
     for (i=0;i<=(n-k);i++) {
         getInversions(i,k);
           arr[i]=inv; }
     for (i=0;i<k;i++)
         printf("%d ",arr[i]);
    return 0; }