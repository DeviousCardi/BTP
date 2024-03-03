#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int inversion=0;
    for(int i=l;i<l+r-1;i++) {
        for(int j=i+1;j<l+r;j++) {
            if(arr[i]>arr[j]) {
                inversion++; } } }
    return(inversion); }
int main() {
    int n,k,maxinv=0,inv;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++) {
        inv=getInversions(i,k);
        if(inv>maxinv) {
            maxinv=inv; } }
    printf("%d",maxinv);
    return 0; }