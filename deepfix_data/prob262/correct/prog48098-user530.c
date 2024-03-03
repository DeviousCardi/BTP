#include<stdio.h>
#include<strings.h>
int rec(int a[],int start,int end){
    if(start<=end){
        int temp;
        temp=a[end];
        a[end]=a[start];
        a[start]=temp;
        rec(a,start+1,end-1); } }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d ",&a[i]);
    rec(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0; }