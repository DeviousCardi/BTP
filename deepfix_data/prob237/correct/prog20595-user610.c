#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<l+r;i++) {
        for(j=i+1;j<l+r;j++) {
            if(arr[i]>arr[j])
            count++; } }
    return count; }
int main() {
    int n,i,k,x,M,max[100];
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    M=0;
    for(i=0;i<n-k+1;i++) {
        x=getInversions(i,k);
        if(x>M)
        M=x; }
    printf("%d",M);
    return 0; }