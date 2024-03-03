#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int m,M,pM,pm;
    m=arr[0];
    M=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]<m) {
            m=arr[i];
            pm=i; }
        if(arr[i]>M) {
            M=arr[i];
            pM=i; } }
    arr[pm]=M;
    arr[pM]=m;
    for(i=0;i<n;i++) {
        printf("%d",arr[i]); }
    printf("end");
    return 0; }