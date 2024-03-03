#include<stdio.h>
int a[10000];
int prod(int m){
    if(m>=0){
    if(a[m]==0)
    return 0;
    else
    return (a[m]*prod(m-1)); } }
int main() {
    int n,i,t;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    t=prod(n-1);
    printf("%d",t);
    return 0; }