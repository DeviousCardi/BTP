#include <stdio.h>
int main(){
    int n,k,i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        if((arr[i+1]>arr[i+2])&&(arr[i+1]>arr[i])) {
                k=k-1;
        }    printf("%d",k);}
    return 0; }