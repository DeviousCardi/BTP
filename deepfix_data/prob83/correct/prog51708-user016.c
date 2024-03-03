#include <stdio.h>
int main() {
    int i,j,n,d,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    scanf("%d",&d);
    for(i=0;(i+d)<n;i++) {
        j=arr[i+d+1];
        arr[i+d+1]=arr[i];
        arr[i]=j; }
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0; }