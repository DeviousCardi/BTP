#include<stdio.h>
#include<strings.h>
int reverse(int a[],int n) {
    if(n==0)
    return 0;
    printf("%d ",a[n-1]);
    return reverse(a,n-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    reverse(a,n);
    return 0; }