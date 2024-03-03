#include<stdio.h>
int sum(int a[],int n,int i) {
    if(i==n) {
        return 0; }
    else {
        return (a[i]+sum(a,n,i+1)); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%d",sum(a,n,0));
    return 0; }