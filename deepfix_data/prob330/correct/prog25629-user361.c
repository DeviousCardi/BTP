#include <stdio.h>
int main(){
    int n,k=0,i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        if(arr[i]>arr[i-1]){
            if(arr[i]>arr[i+1])
           { k++;} }
        else{k=0;} }
     printf("%d",k);
    return 0; }