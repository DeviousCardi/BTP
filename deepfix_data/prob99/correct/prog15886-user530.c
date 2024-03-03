#include<stdio.h>
int mx(int a,int b);
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d ",&a[i]);
    int max[n];
    return 0; }
int mx(int a,int b){
    int x;
    x=a>b ? a: b ;
    return x; }