#include <stdio.h>
int main(){
    int arr[100];
    int i,n;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i+1]>arr[i]&&arr[i+1]>arr[i+2]){
            count++; } }
    printf("%d",count);
    return 0; }