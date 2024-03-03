#include <stdio.h>
int main() {
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(arr[j]<arr[i]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; } } }
    if((n%2)!=0)
    printf("%d",arr[(n-1)/2]);
    return 0; }