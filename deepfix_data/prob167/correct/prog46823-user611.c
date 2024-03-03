#include<stdio.h>
int add=0;
int sum(int n,int a[]) {
    if((n-1)<0) {
        printf("%d",add);
        return 0; }
    else {
    add=add+a[n];
    return sum(n-1,a); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[n]);
    sum(n,a);
    return 0; }