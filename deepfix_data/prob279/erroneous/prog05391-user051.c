#include <stdio.h>
int main() {
    int n,i,j,temp,arr[1000],miss_no,repeat_no;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++) {
            if(arr[j]<arr[i]) {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp; } } }
    for(i=0;i<n;i++) {
        if(arr[i]!=i+1) {
            repaet_no=arr[i];
            miss_no=i;
            break; } }
    printf("%d\n",repeat_no);
    printf("%d",miss_no);
    return 0; }