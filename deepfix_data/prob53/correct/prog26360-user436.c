#include<stdio.h>
int diff(int a[],int n) {
if (n==1)
{return (a[n-1]);}
else {
    return a[n-1]-(diff(a,n-1)); } }
int main() {
    int n,x,m;
    scanf("%d",&n);
    int a[1000000000];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    x= diff(a,n);
    m=-x;
    printf("%d",m);
    return 0; }