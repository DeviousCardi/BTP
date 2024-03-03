#include <stdio.h>
int arr[100]={0};
int n;
int main() {
    int k,i,temp=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        temp=temp>arr[i]?temp:arr[i];
    }printf("%d",temp);
    return 0; }