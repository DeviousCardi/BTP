#include<stdio.h>
int diff(long arr[],int start,int size) {
    int i;
    long b[size];
    if(size==1)
    return arr[start];
    else if(size>1) {
        b[start]=arr[start]-arr[start+1];
        for(i=start+2;i<size;i++) {
            b[i-1]=arr[i]; }
        return diff(b,start,size-1); } }
int main() {
    int n,i;
    long p;
    scanf("%d",&n);
    long num[n];
    for(i=0;i<n;i++) {
        scanf("%ld ",&num[i]); }
    p=diff(num,0,n);
    printf("%ld",p);
    return 0; }