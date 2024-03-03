#include<stdio.h>
int f(int a[],int n,int i) {
    return (a[0]-f(a,n,i+1)); }
int main() {
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",f(a,n,i));
    return 0; }