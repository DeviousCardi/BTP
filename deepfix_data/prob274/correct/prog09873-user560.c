#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int num[n];
    int i,j;
    int arr[n+1];
    arr[0]=1;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]);
        for(j=1;j<n+1;j=j+1) {
            arr[j]=num[i]; } }
    int count=0;
    for(j=1;j<n+1;j=j+1) {
        while(arr[1]!=arr[j+1]) {
            count=count+1;
            j=j+1; } }
    printf("%d %d",count,count+1);
    return 0; }