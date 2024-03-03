#include<stdio.h>
int diff(int[],int,int);
int main() {
    int a[100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    j=diff(a,0,n);
    printf("%d",j);
    return 0; }
int diff(int a[100],int i,int n) {
    if(i==n-1) {
        return a[n-1]; }
    else {
        return diff(a,i,n)-diff(a,i+1,n); } }