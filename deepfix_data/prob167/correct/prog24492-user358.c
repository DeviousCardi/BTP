#include<stdio.h>
int a[100000];
int n,k;
int sum(n) {
    if(n==1) {
        return a[0]; }
    else
    return (a[n-1]+sum(n-1)); }
int main() {
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++)
   { scanf("%d ",&a[i]);
    printf("%d ",a[i]);}
    printf("%d ",sum(1));
    return 0; }