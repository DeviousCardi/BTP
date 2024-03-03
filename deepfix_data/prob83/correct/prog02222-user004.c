#include <stdio.h>
int main() {
    int n,d,i;
    scanf("%d\n",&n);
    int arr[n];
    i=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("\n%d",&d);
    for(i=n-d-1;i<=(n-1);i++){
        printf("%d ",arr[i]); }
    i=0;
    for(i=0;i<=(n-d-1);i++){
        printf("%d ",arr[i]); }
    return 0; }