#include<stdio.h>
int arr[100];
int getInv(int l,int r)
{   int i;
    int count=0;
    for(i=l;i<r;i++) {
        for(j=l+1;j<r;j++) {
            if(arr[i]>arr[j])
            count++; } }
    return count; }
int main() {
    int l,r;
    int n,m,max=0,v;
    scanf("%d%d",&n,&m);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        v=getInv(i,m);
        if(v>max)
        max=v; }
    printf("%d",max);
    return 0; }