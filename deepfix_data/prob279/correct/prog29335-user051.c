#include <stdio.h>
int main() {
    int n,i,j,temp,arr[1000],miss_no=0,repeat_no=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++) {
            if(arr[j]>arr[i]) {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp; }
            if(arr[j]==arr[i]) {
                repeat_no=arr[i];
                n=n-1; } } }
    for(i=0;i<n;i++) {
        if(arr[i]!=i+1) {
            miss_no=i+1;
            break; } }
    printf("%d\n",repeat_no);
    printf("%d",miss_no);
    return 0; }