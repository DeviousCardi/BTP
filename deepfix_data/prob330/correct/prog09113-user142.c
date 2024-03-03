#include <stdio.h>
int main(){
    int n,i,k=0,c;
    scanf("%d",&n);
    int arr[n];
    c=arr[0];
for(i=1;i<=n-1;i++) {
    scanf("&d",&arr[n]);
if((arr[i+1]>arr[i]) && (arr[i+1]>arr[i+2])) {
    k=k+1; }
c=arr[i]; }
printf("%d",k+1);
    return 0; }