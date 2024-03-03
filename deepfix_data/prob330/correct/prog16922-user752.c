#include <stdio.h>
int main(){
    int arr[100];
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}
        for(i=0;i<n;i++){
        if(arr[i+1]>arr[i]&&arr[i+1]>arr[i+2]){
            sum=sum+1; } }
    printf("%d",sum);
    return 0; }