#include <stdio.h>
int main() {
    int n,k,temp;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    for(int i=0;i<(n-1);i++){
        if(arr[i+1]>arr[i]){
            temp=arr[i];
            printf("*%d",temp);
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            for(int i=0;i<n;i++){printf("%d ",arr[i]);} } }
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    return 0; }