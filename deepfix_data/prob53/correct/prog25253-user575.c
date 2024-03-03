#include<stdio.h>
int diff(int a[],int );
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    printf("%d",diff(a,n));
    return 0; }
int diff(int a[],int n) {
    if(n==0)
        return 0;
    else if(n==1)
        return a[0];
    else if(n==2)
        return a[0]-a[1];
    else
        return diff(a,n-1)-a[n-1]; }