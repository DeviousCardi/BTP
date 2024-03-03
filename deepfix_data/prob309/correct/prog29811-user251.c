#include <stdio.h>
int main() {
    int n,i,j,count=0,waste=0;
    int arr[1000];
    scanf("%d\n",&n);
    arr[0]=0;
    for(i=0;i<n;i++) {
        scanf("%d,",&arr[i]); }
    for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(arr[i]==arr[j]) {
                count=count+1; } }
        if(count==arr[i]) {
            if(i==n-1&&j==n-1) {
                printf("Yes");
                return 0; }
            continue; }
        else {
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }