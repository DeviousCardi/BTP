#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,count=0;
    for(i=l;i<l+r;i++){
        for(j=i+1;j<l+r;j++){
            if(arr[j]<=arr[i]) count++; } }
    return count; }
int main() {
    int n,k,i,invmax,inv;
    scanf("%d\n%d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    inv=invmax=getInversions(0,k);
    for(i=1;i<=n-k;i++){
        inv=getInversions(i,k);
        if(inv>invmax) invmax=inv; }
    printf("%d",invmax);
    return 0; }