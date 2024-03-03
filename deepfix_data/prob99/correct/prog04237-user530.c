#include<stdio.h>
int max(int a,int b);
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d ",&a[i]);
    int maxt[n];
    return 0; }
int max(int a,int b){
    int x;
    x=a>b ? a: b ;
    return x; }