#include <stdio.h>
int main() {
    int n,i,j,count=0;
    int arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(arr[i]==arr[j]) {
                printf("%d",arr[i]); } } }
    for(i=1;i<=n;i++) {
        for(j=0;j<n;j++) {
            if(i==arr[j]) {
                count=count+1; } }
        if(count==0) {
            printf("%d",arr[i]); } }
    return 0; }