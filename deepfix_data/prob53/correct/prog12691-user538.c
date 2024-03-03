#include<stdio.h>
int i=0;
int diff(int a[],int n){
    i++;
    if(i==n)
    return a[n-1];
    else
    return(a[i-1]-diff(a,n)); }
int main() {
    int n;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k=diff(a,n);
    printf("%d",k);
    return 0; }