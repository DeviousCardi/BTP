#include <stdio.h>
int l;
int max(int n,int arr[n]){
    int i,m=0;
    for(i=0;i<n;i++){
        if(arr[i]>m)
        m=arr[i]; }
    for(i=0;i<n;i++){
        if(arr[i]==m)
        break; }
    arr[i]=0;
    return m; }
void sort(int n,int arr[l],int brr[l]){
    if(n==0)
    return;
    brr[l-n]=max(l,arr);
    sort(n-1,arr,brr); }
int main() {
   int i,n,k;
   scanf("%d%d",&n,&k);
   l=n;
   int arr[n],brr[n];
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   sort(n,arr,brr);
   printf("%d",brr[k-1]);
    return 0; }