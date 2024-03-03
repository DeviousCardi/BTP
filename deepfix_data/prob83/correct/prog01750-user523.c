#include <stdio.h>
int main() {
    int n,d,i,j,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(j=1;j<=d;j++) {
        m=arr[n-1];
        for(i=n-2;i>=0;i--) {
            arr[i+1]=arr[i]; }
        arr[0]=m; }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]); }
    return 0; }