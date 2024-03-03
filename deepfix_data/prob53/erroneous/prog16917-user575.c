#include<stdio.h>
int diff(int a[],int);
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%d",diff(a,n));
    return 0; }
int diff(int a[],int n) {
    if(n==1)
        return a[0];
    else if(n==2)
        return a[1]-a[0];
    else
        return a[n-1]-a[n-2]; }