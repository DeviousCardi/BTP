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
        printf("%d ",arr[i]);
        for(j=i+1;j<=(i+r-1);j++){
         if(a>arr[j])
         b=b+1; } }
   return b; }
int main() {
    int n,k,i,p,z;
    p=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
      p= p+ (n-i)/k;
    }printf("%d ",p);
    int sub[p];
    for(i=0;i<p;i++){
        sub[i]=getInversions(i,k); }
    z=sub[0];
    for(i=1;i<p;i++){
        z=max(z,sub[i]); }
    printf("%d",z);
    return 0; }