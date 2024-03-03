#include<stdio.h>
int sum(int a[],int n){
    int s=s+a[n-1];
    if(n-1==0)return s;
    else return sum(a[],n-1); }
int main() {
    int n,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    t=sum(a,n);
    return t;
    return 0; }