#include <stdio.h>
int main(){
   int n,i,k,a;
   int arr[1000];
   scanf("%d",&n);
   for(i=0;i<=n;i++) {
    scanf("%d",&arr[i]); }
   for(i=0;i<=n;i++) {
    k=arr[i]-arr[i+1];
    a=arr[i]-arr[i+2];
    if(k>a)
    printf("%d\n",k);
    else
    printf("%d",a); }
    return 0; }