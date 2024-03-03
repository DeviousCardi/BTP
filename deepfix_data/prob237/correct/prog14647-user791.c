#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
   int i,j,count=0;
   for(i=l;i<=l+r;i++)
   for(j=l;j<=l+r;j++)
   if((arr[i]>arr[j])&&(i<j))
   count++;
   return count; }
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int i,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int no_sub[n-k+1];
    for(i=0;i<n-k+1;i++)
    no_sub[i]=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-k+1;i++){
    no_sub[i]=getInversions(i,i+k-1); }
    int M=no_sub[0];
    for(i=0;i<n-k;i++)
    M=max(M,no_sub[i]);
    printf("%d",M);
    return 0; }