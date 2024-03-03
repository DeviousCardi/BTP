#include <stdio.h>
int main() {
    int n,d,i;
    scanf("%d\n",&n);
    int arr[n];
    i=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("\n%d",&d);
    i=n-d-1;
    for(i=n-d-1;i<=d;i++){
        printf("%d ",arr[i]); }
    i=n-d-1;
    for(i=n-d-1;i>=0;i--){
        printf("%d ",arr[i]); }
    return 0; }