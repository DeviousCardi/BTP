#include<stdio.h>
int a[50];
int sum(int a[],int n,int s) {
    if(s==0)
    return 1;
    if(n<0)
    return 0;
    else
    return (sum(a,n-1,s-a[n])||sum(a,n-1,s)); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int k=sum(a,n,s);
    if(k==0)
    printf("NO");
    if(k==1)
    printf("YES"); }