#include <stdio.h>
int main() {
    int n,k,temp;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    for(int j=0;j<n;j++){
        for(int i=0;i<(n-1);i++){
            if(arr[i+1]>arr[i]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp; } } }
    printf("%d",arr[k-1]);
    return 0; }