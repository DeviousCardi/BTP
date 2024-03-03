#include<stdio.h>
int diff(int[],int);
int main() {
    int a[100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    j=diff(a,n);
    printf("%d",j);
    return 0; }
int diff(int a[100],int n) {
    if(n==0) {
        return a[0]; }
    else {
        return a[n]-diff(a,n-1); } }