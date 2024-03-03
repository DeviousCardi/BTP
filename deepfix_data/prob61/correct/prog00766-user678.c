#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n,&k);
    int arr[n];
    for(int i=0;i<n;i++) {
        if(arr[i]<=k&&arr[i]>=0) {
            scanf("%d", &arr[i]); } }
    if((k==1)&&(n==1))
    printf("%d", arr[n-1]); }