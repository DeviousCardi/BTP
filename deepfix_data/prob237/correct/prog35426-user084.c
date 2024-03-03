#include<stdio.h>
int arr[100];
int getInversions(int t,int r) {
    int i,j,count=0,n;
      for(i=t;i<=t+r-1;i++) {
        for(j=i+1;j<=t+r-1;j++) {
            if((arr[i]>arr[j]))
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
    printf("%d",count);
    return 0; }