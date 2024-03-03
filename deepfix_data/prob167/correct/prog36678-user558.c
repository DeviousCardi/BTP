#include<stdio.h>
int sum(int a[],int n) {
    if(n==0)
    return 0;
    else
    return (a[n-1]+sum(a,n-1)); }
int main() {
    int s,i;
    long n;
    scanf("%d",&n);
    int a[100000];
    for(i=0;i<n;i++){
    scanf("%d ",&a[i]);}
    s=sum(a,n);
    printf("%d",s);
    return 0; }