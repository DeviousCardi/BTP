#include <stdio.h>
int main() {
    int n,i=1;
    scanf("%d", &n);
    int arr[n];
    int m,M,pM=0,pm=0;
    m=arr[0];
    M=arr[0];
    for(,i<n;i++) {
        if(arr[i]<m) {
            m=arr[i];
            pm=i; }
        if(arr[i]>M) {
            M=arr[i];
            pM=i; } }
    arr[pm]=M;
    arr[pM]=m;
    printf("end");
    return 0; }