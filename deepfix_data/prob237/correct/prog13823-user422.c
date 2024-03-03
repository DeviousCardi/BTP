#include<stdio.h>
int arr[100];
int max(int a,int b){
    if (a>b)
    return a;
    else
    return b; }
int getInversions(int l,int r) {
   int a,b,i,j;
   b=0;
   for(i=l;i<=(l+r-1);i++){
        a= arr[i];
        for(j=i+1;j<(l+r);j++){
         if(a>arr[j])
         b=b+1; } }
   return b; }
int main() {
    int n,k,i,p,z;
    scanf("%d %d",&n,&k);
    p=n-k + 1;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int sub[p];
    for(i=0;i<p;i++){
        sub[i]=getInversions(i,k); }
    z=sub[0];
    for(i=1;i<p;i++){
        z=max(z,sub[i]); }
    printf("%d",z);
    return 0; }