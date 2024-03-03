#include <stdio.h>
int main() {
    int n,i,j,count=0;
    int arr[];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[i]==arr[j]) {
                count=count+1; } }
        if(count==a[i]) {
            continue; }
        else {
            printf("NO");
            return 0; } }
    return 0; }