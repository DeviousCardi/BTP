#include <stdio.h>
int main() {
    int n,i,j,count,index,temp,arr[1000],miss_no=0,repeat_no=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++) {
            if(arr[j]>arr[i]) {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp; }
            if(arr[j]==arr[i]) {
                repeat_no=arr[i]; } } }
    for(i=0;i<n;i++) {
        if(arr[i]==repeat_no) {
            for(j=i+1;j<n;j++)
                arr[j-1]=arr[j]; } }
    arr[n-1]=0;
    for(i=0;i<n;i++) {
        if(arr[i]!=i+1) {
            miss_no=i+1;
            break; } }
    printf("%d\n",repeat_no);
    printf("%d",miss_no);
    return 0; }