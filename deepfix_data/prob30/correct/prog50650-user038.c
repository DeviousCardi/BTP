#include <stdio.h>
int arr[100]={0};
int n,a,u;
int getMaxLessThan(int u) {
    int a=-1000;
    int i=0;
    do {
        if(arr[i]>=a) {
            a=arr[i]; }
        i++; }
    while(i<n);
    u=a;
    int i1=0,i2=0,b[100];
    while(i1<n) {
        if(arr[i1]<=a) {
            arr[i1]=b[i2];
            i2++; }
        i1++; }
    do {
        if(b[i]>=u) {
            u=b[i]; }
        i++; }
    while(i<i2);
    printf("%d",u); }
int main() {
    return 0; }