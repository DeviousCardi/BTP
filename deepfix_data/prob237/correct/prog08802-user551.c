#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int x, j, count =0;
    for(x=l;x<l+r;x++) {
        for(j=x+1;j<l+r;j++) {
            if(arr[x]>arr[j]) {
                count++; } } }
    return count; }
int main() {
    int n,k,i,max = 0,c;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<(n-k+1);i++) {
        c = getInversions(i,k);
        if(c>max) {
            max = c; } }
    printf("%d",max);
    return 0; }