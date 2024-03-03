#include<stdio.h>
int diff(int arr[],int start,int size) {
    int m,i;
    int b[size];
    if(size==1)
    return arr[start];
    else if(size>1) {
        b[start]=arr[start]-arr[start+1];
        for(i=start+2;i<size;i++) {
            b[i-1]=arr[i]; }
        return diff(b,start,size-1); } }
int main() {
    int n,i,p;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&num[i]); }
    p=diff(num,num[0],n);
    printf("%d",p);
    return 0; }