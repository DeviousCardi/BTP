#include<stdio.h>
int diff(int x[],int start,int end) {
    if(start==end)
        return x[start];
    x[start+1]=x[start]-x[start+1];
    return diff(x,start+1,end); }
int main() {
    int n,i,a[1000000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",diff(a,0,n-1));
    return 0; }