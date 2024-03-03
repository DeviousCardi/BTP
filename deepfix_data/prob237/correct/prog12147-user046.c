#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int c=0;
    for(int i=l;i<l+r-1;i++) {
        for(int j=i+1;j<l+r-1;j++) {
            if(arr[i]>arr[j])
            c++; } }
    return c; }
int main() {
    int n,k;int big=0;
    scanf("%d\n%d\n",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<(n-k);i++) {
        int g=getInversions(i,i+k-1);
        if(big<g)
        big=g; }
    printf("%d",big);
    return 0; }