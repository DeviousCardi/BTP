#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int inversions=0;
    int i=0;
    int j=0;
    for(i=l;i<l+r;i++) {
        for(j=i+1;j<l+r;j++) {
            if(arr[j]<arr[i]) {
                inversions=inversions+1; } } }
    return inversions; }
int main() {
    int n=0;
    scanf("%d",&n);
    int k=0;
    scanf("%d",&k);
    int i=0;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int getInversions(int,int);
    int inv[n-k+1];
    int j=0;
    for(j=0;j<n-k+1;j++) {
        inv[j]=getInversions(j,k); }
    int max_inv=inv[0];
    int l=0;
    for(l=0;l<n-k+1;l++) {
        if(inv[l]>max_inv) {
            max_inv=inv[l]; } }
    printf("%d",max_inv);
    return 0; }