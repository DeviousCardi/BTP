#include<stdio.h>
int arr[100];
int max(int a,int b){
    if(a>=b)
    return a;
    else
    return b; }
int getInversions(int l,int r) { }
int main() {
    int n,k,l,r,mx;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=1, j=k;i<(n-k+1);i++,j++) {
        l=i;
        r=j;
        mx=max(mx,getInversions(l,r)); }
    printf("%d",mx)
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }