#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{ int i,j,count=0;
    for (i=l;i<l+r;i++){
        for(j=i+1;j<l+r;j++){
            if(arr[i]>arr[j])
            count++; } }
    return count; }
int main() {
    int n,i;
    int k,max=0,m;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n-k+1;i++){
        m=getInversions(i,k);
        if(m>max)
        max=m; }
    printf("%d",max);
    return 0; }