#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<n;) {
        count++;
        if(arr[i]%10==0) {
            printf("%d",count);
            break; }
        arr[i]=arr[i]*10;
        i=arr[i]/10; }
    return 0; }