#include <stdio.h>
int main(){
    int arr[1000],n,p;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<n-1;i++) {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        p++; }
    printf("%d",p);
    return 0; }