#include <stdio.h>
int main() {
    int n,d,i,temp;
    int arr[500];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++){
        if((i-d)<0){
            temp=arr[i];
            arr[i]=arr[n+i-d]; }
     printf("%d",arr[i]); }
    return 0; }