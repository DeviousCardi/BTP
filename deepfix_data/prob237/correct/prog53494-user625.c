#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int n,k,i,j,x;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        for(j=i;j<i+k-1;j++) {
            scanf("%d",&a[j]);
            x=a[j]; }
      printf("%d",getInversions( a[i],x)); }
    return 0; }
int main() {
    return 0; }