#include <stdio.h>
int main() {
    int i,j,x,k,n,temp,arr[100000];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[j]>arr[i])
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x; } }
    printf("%d",arr[n-1-k]);
    return 0; }