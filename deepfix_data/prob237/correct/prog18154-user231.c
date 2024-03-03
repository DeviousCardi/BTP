#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int c,d,count=0;
    for(c=l;c<l+r-1;c++){
        for(d=l+1;d<l+r-1;d++){
            if(arr[c]>arr[d]){
                count++; } } }
    return count; }
int main() {
    int i,n,k,p,q=0,j;
    scanf("%d %d",&n,&k);
    for(p=0;p<n;p++){
        scanf("%d ",&arr[p]); }
    if(k<=n){
        for(i=0;i<=n-k;i++){
            j=getInversions(i,k);
            if(j>q){
                q=j; } }
        printf("%d",q); }
    return 0; }