#include <stdio.h>
int main() {
    int n,i,j,count,arr[1000],miss_no=0,repeat_no=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++) {
            if(arr[j]==arr[i]) {
                repeat_no=arr[i]; } } }
    for(i=0;i<n;i++) {
        for(j=0,count=0;j<n;j++) {
            if(arr[i]!=j+1)
                count=count+1;
            if(count==n) {
                miss_no=i;
                break; } } }
    printf("%d\n",repeat_no);
    printf("%d",miss_no);
    return 0; }