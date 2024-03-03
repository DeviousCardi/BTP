#include<stdio.h>
int add=0;
int sum(int n,int a[n]) {
    if((n-1)<0) {
        printf("%d",add);
        return 0; }
    else {
    add=add+a[n];
    return sum(n-1,a[n-1]); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[n]);
    int sum(n,a[n]); }