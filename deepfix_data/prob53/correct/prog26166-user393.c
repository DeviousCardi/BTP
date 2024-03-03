#include<stdio.h>
int diff(int a[],int n) {
    int prev;
    if(n==1)
    return a[n-1];
    if(n>1) {
        return(a[n-1]-diff(a,n-2)); } }
int main() {
    int n,d,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    d=diff(a,n);
    printf("%d",d);
    return 0; }