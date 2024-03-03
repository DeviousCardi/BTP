#include <stdio.h>
int sum(int a[],int start ,int end ,int n,int s);
int main() {
    int n,k,p,i;
    int a[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
   printf("%d",sum(a,0,n-1,n,0));
    return 0; }
int sum(int a[],int start ,int end ,int n,int s) {
    int i,j,k;
    if(n==0)
    return 0;
    else
    return (a,start+1,end,n-1,s+a[start]); }