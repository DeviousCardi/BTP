#include <stdio.h>
int main(){
    int arr[100];
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]) }
    for(i=1;i<n-1;i++) {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])sum=sum+1; }
    printf("%d",sum);
    return 0; }