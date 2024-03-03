#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<=n;) {
        if(arr[i]%1000==0) {
            printf("%d",count);
            break; }
        count++;
        arr[i]=arr[i]*1000;
        i=(arr[i]/1000)-1; }
    return 0; }