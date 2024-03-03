#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{int c=0,i,j;
    for(i=l;i<l+r;i++) {
        for(j=i;j<l+r;j++) {
            if(arr[i]>arr[j])
            {c++; } } }
    return c; }
int main() {
    int n,i,k,m,max;
    scanf("%d %d",&n,&k);
    max=0;
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=0;i<(n-k+1);i++) {
       m=getInversions(i,k);
        if(max<m) {
            max=m; } }
    printf("%d",max);
    return 0; }