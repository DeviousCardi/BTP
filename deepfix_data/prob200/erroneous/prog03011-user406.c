#include <stdio.h>
int arr[100]={0};
int n;
int diff[100];
int min(int a; int b) {
    if(a>b) return b;
    else    return a; }
int getMaxLessThan(int upperLimit) {
    int i;
    for(i=0;i<100;i++) {
        diff[i]=upperLimit-arr[i]; }
    int m=0;
    for(i=0;i<100;i++) {
        if(diff[i]>0) {
            m=min(m,diff[i]); } }
    return upperLimit+m; }
int main() {
    return 0; }