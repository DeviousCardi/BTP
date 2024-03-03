#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
int reverse(int num[],int start,int end,int size);
int main() {
    int n;
    scanf("%d\n",&n);
    int i;
    int num[n];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    reverse(num,0,n-1,n);
    for(i=0;i<n;i=i+1) {
        printf("%d ",num[i]); }
    return 0; }
int reverse(int num[],int start,int end,int n) {
    if(start==end)
    return 0;
    else {
        int temp=0;
        temp=num[start];
        num[start]=num[end];
        num[end]=temp;
        reverse(num,start+1,end-1,n); } }