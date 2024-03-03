#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int j,count=0,i;
    for(j=0;j<r;j++) {
       for(i=j;i<r;i++) {
       if(arr[j+l]>arr[l+i])
       count++; } }
    printf("%d %d %d,\n",l,r,count);
    return(count); }
int main() {
    int n,k,i,m,l=0;
    int getInversions(int l,int r);
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<=(n-k+1);i++) {
        m=getInversions(i,k);
        if(m>l)
        l=m; }
    printf("%d",l);
    return 0; }