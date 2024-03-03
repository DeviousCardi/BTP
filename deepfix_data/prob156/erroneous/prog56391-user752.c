#include <stdio.h>
int main() {
    int n,count=0;
    int arr[200];
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=1;i<n;i++){
        count=0;
        if(i>i-1&&arr[i-1]>arr[i]){
            count++; }
        printf("%d ",&count); }
    return 0; }