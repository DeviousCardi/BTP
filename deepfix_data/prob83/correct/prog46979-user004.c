#include <stdio.h>
int main() {
    int n,d,i;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("\n%d",&d);
    for(i=n-d-1;i<=d;i++){
        printf("%d",arr[i]); }
    for(i=n-d-1;i>=0;i--){
        printf("%d",i); }
    return 0; }