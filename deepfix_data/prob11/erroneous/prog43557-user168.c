#include <stdio.h>
int sum(int a[],int start ,int end ,int n,int s);
int main() {
    int n,k,p,i;
    int a[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
   p=sum(a,0,n,0);
   printf("%d",p);
    return 0; }
int sum(int a[],int start ,int end ,int n,int s) {
    int i,,j,k;
    if(start==end)
    return 0;
    else
    return (a,start+1,end,n-1,s+a[start]) }