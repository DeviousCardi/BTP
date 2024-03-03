#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int i=l;i<=l+r-1;i++) {
        for(int j=i;j<=l+r-1;j++) {
            if(arr[i]>arr[j])
            count++; } }
    return count; }
int main() {
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<=n-1;i++) {
        scanf("%d",&arr[i]); }
    int c,max=0;
    for(int i=0;i<=n-k;i++) {
        c=getInversions(i,k);
        if(c>max) {
            max=c; } }
    printf("%d",c);
    return 0; }