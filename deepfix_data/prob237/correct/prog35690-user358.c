#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{    int c=0;
for(int i=l;i<r;i++) {
    for(int j=i;j<r;j++) {
        if(arr[i]>arr[j])
        c++; } }
return c; }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[(n-k+1)];
    for(int i=0;i<100;i++) {
        scanf("%d ",&arr[i]); }
    for(int j=0;j<(n-k+1);j++) {
        for(int x=j;x<(j+k);x++) {
            a[j]=getInversions(j,(j+k)); }
        printf("%d ",a[j]); }
    int y=a[0];
    for(int x=0;x<(n-k+1);x++) {
        if(y<=a[x])
        y=a[x]; }
    printf("%d",y);
    return 0; }