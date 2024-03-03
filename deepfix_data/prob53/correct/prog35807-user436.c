#include<stdio.h>
int diff(int a[],int n) {
if (n==1)
{return (a[n-1]);}
else {
    return a[n-1]-(diff(a,n-1)); } }
int main() {
    int n,x;
    scanf("%d",&n);
    int a[100000];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int b[100000];
    for(int i=0;i<n;i++) {
        b[i]=a[n-(i+1)]; }
    x= diff(b,n);
    printf("%d",x);
    return 0; }