#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,m,temp;
    m=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]==upperLimit) {
            continue; }
        else if(m<arr[i]) {
            temp=arr[i];
            arr[i]=m;
            m=temp; } }
    return m; }
int main() {
    int k,i,m,temp;
    scanf("%d",&n);
    scanf("%d",&k);
    int b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    m=arr[0];
    for(i=1;i<n;i++) {
        if(m<arr[i]) {
            temp=arr[i];
            arr[i]=m;
            m=temp; } }
    b[0]=m;
    for(i=1;i<k;i++) {
        b[i]=getMaxLessThan(b[i-1]); }
    for(i=0;i<k;i++) {
        printf("%d",b[i]); }
    return 0; }