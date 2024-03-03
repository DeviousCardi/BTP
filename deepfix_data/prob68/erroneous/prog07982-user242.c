#include<stdio.h>
int n;
scanf("%d\n",&n);
int a[n];
int prod(int m){
    if(a[m]==0)
    return 0;
    else
    return (a[m]*prod(a[m-1])); }
int main() {
    int i,t;
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    t=prod(n-1);
    printf("%d",t);
    return 0; }