#include <stdio.h>
int main() {
    int i,j,x,k,n,temp,arr[100000];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[j]<arr[i])
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x; } }
    for(i=0;i<n/2;i++) {
        for(j=n-1-1;j>0;j--) {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp; }
    printf("%d",arr[k]);
    return 0; }