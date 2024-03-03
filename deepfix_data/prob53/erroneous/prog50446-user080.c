#include<stdio.h>
int diff(int a[],int start,int end)
{int sum=a[start];
    if(end==0){return a[start];}
    if(start==end){return sum;}
    else {
        sum=sum-a[start+1];
        diff(a,start+1,n-1); } }
int main() {
    int n,a[10000],i;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1) {
        scanf("%d",a[i]); }
    s=diff(a,0,n-1);
    printf("%d",s);
    return 0; }