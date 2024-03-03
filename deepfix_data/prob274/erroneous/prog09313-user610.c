#include <stdio.h>
int main(){
    int n,i,count=0;
    int arr[n];
    for(i=1;i<n;) {
        i=arr[i];
        count++;
        arr[i]=arr[i]*10
        if(arr[i]%10==0) {
            printf("%d",count);
            break; } }
    return 0; }