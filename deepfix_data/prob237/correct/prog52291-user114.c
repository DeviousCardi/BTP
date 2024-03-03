#include<stdio.h>
int max(int a,int b) {
    if (a>b) return a;
    else return b; }
int arr[100];
int getInversions(int l,int r) {
    int count =0;
    for(int i = l; i < l+r; i++) {
        for(int j=l+1; j<l+r ;j++) {
            if(arr[i] >arr[j]) count++; } }
    return count; }
int main() {
    int n,k,s=-9999999;
    scanf("%d%d",&n,&k);
    int h[n-k+1];
    for(int i=0; i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0; i<=n-k; i++) {
        h[i] = getInversions(i,k);
        s = max(h[i],s); }
    printf("%d",s);
    return 0; }