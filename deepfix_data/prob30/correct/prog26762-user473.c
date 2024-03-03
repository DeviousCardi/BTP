#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int b,a,c;
    b=arr[0];
    for(i=1;i<n;i++) {
        if(b>arr[i]) {
            b=a; }
        else {
            a=arr[i]; } }
    for(i=1;i<n;i++) {
        while(arr[i]!=a) {
            if(b>arr[i]) {
            b=c; }
        else {
            c=arr[i]; } } }
    return c; }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    int a,b;
    for(i=0;i<n;i++) {
        if(b>arr[i]) {
            b=a; }
        else {
            a=arr[i]; } }
    printf("%d ",a);
    printf("int getMaxLessThan(a)");
    return 0; }